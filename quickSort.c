#include <stdio.h>
#define max 20

void swap(int *a,int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int partition(int arr[],int l,int u){
    int x = arr[u];
    int i = l-1;
    for(int j=l;j<u;j++){
        if(arr[j] <= x){
            i+=1;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[u]);
    return i+1;
}
void quickSort(int arr[],int l, int u){
    if(l<u){
        int p = partition(arr,l,u);
        quickSort(arr,p+1,u);
        quickSort(arr,l,p-1);
        
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
    quickSort(arr,0,n-1);
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
}