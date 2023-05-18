#include <stdio.h>
#define max 20
void swap(int *a,int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}
void maxHeapify(int arr[],int i,int n){
    int l = 2*i + 1;
    int r = 2*i + 2;
    int maxloc=i;
    if(l<n && arr[i]<arr[l])maxloc=l;
    if(r<n && arr[r]>arr[maxloc]) maxloc=r;
    if(maxloc!=i){
        swap(&arr[i],&arr[maxloc]);
        maxHeapify(arr,maxloc,n);
    }

}
void buildMaxHeap(int arr[],int n){
    for(int i = n/2 -1 ;i>=0;i--){
        maxHeapify(arr,i,n);
    }
}

void heapSort(int arr[],int n){
    buildMaxHeap(arr,n);
    for(int i=n;i>0;i--){
        swap(&arr[0],&arr[i]);
        buildMaxHeap(arr,i);
    }
}

void main(){
    int n,arr[max];
    printf("enter no. of elements\n");
    scanf("%d",&n);
    printf("enter array elements\n");
    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    heapSort(arr,n-1);
    for (int i = 0; i < n; i++){
        printf("%d  ",arr[i]);
    }
}