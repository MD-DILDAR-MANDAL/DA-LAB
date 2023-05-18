#include<stdio.h>
#define max 10
void insertionSort(int arr[],int n){
    for(int i = 1;i< n;i++){
        int key = arr[i];
        int j = i-1;
        while(arr[j] > key & j > -1){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
int main(){
    int arr[max],n ;
    printf("enter no of elements\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(int i=0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    insertionSort(arr,n);
    for(int i=0;i < n;i++){
        printf("%d ",arr[i]);
    }
}