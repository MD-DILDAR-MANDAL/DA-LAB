#include <stdio.h>
#define max 20

void mergeSort(int [],int ,int);
void merge(int [],int ,int);

void main(){
    int n,arr[max];
    printf("enter no of elements\n");
    scanf("%d",&n);
    printf("enter array elements\n");
    for(int i =0;i<n;i++)
        scanf("%d",&arr[i]);
    mergeSort(arr,0,n-1);
    for(int m=0;m < n;m++){
        printf("%d ",arr[m]);
    }
}
void mergeSort(int arr[],int lb,int ub){
    if(lb<ub){
        int mid = (lb + ub) /2;
        mergeSort(arr,lb,mid);
        mergeSort(arr,mid+1,ub);
    }
    merge(arr,lb,ub);
}
void merge(int arr[],int lb,int ub){
    int B[max];
    int mid = (lb+ub) /2;
    int i=lb,j=mid+1,k=lb;
    while(i<=mid && j<=ub){
        if(arr[i]<arr[j]){
            B[k++]=arr[i++];
        }
        else{
            B[k++]=arr[j++];
        }
    }
    if(i>mid){
        while(j<=ub){
            B[k++]=arr[j++];
        }
    }
    if(j>ub){
        while(i<=mid){
            B[k++]=arr[i++];
        }
    }
    for(int m=lb;m<k;m++){
        arr[m]=B[m];
    }
}