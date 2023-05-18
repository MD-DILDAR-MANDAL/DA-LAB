#include <stdio.h>

void binarySearch(int arr[],int lb,int ub,int key){
    int mid,flag = -1;
    while(lb <= ub){
        mid = (lb + ub)/2;
        if(arr[mid]==key){
            flag =mid;
            break;
        }
        else if(arr[mid] < key){
            lb = mid+1;
        }
        else if(arr[mid]>key){
            ub = mid-1;
        }
    }
    if(flag!= -1)printf("found!! at position %d",flag + 1);
    else printf("not found\n");
}

int main(){
    printf("enter 5 array elemnts\n");
    int arr[5]={5,6,7,8,9},key;
    //for(int i = 0;i < 5;i ++){
     //   scanf("%d",&arr[i]);
    //}
    printf("which element u want to find\n");
    scanf("%d",&key);
    binarySearch(arr,0,4,key);
}
