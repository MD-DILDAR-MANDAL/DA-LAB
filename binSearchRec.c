#include<stdio.h>
#include<stdbool.h>
#define max 20

bool binSearchRec(int arr[],int lb,int ub,int key){
    if(ub>lb) return false;
    else {
        int mid = (ub+lb)/2;
        if(arr[mid] > key) binSearchRec(arr,lb,mid-1,key);
        else if(arr[mid]< key) binSearchRec(arr,mid+1,ub,key);
        else {
            return true;
        }
    }
}
void main(){
    int n,arr[max];
    printf("enter no of elements\n");
    scanf("%d",&n);
    printf("enter array elements\n");
    for(int i =0;i<n;i++)
        scanf("%d",&arr[i]);
    int key;
    printf("\n enter the key to found");
    scanf("%d",&key);
    if(binSearchRec(arr,0,n-1,key)){
        printf("\nfound");
    }
    else printf("\n not found");
}