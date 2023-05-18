#include <stdio.h>

void linSearch(int arr[],int n,int key){
    int flag = -1;
    for(int i = 0;i < n;i++){
        if(key == arr[i]){
            flag = i;
            break;
        }
    }

    if(flag!= -1)printf("found!! at position %d",flag + 1);
    else printf("not found\n");
}

int main(){
    int n,key;
    printf("enter no. of elements\n");
    scanf("%d",&n);
    int arr[n];
    printf("entr array elements \n");
    for (int i = 0; i < n; i++)    {
        scanf("%d",&arr[i]);
        
    printf("which element u want to find\n");
    scanf("%d",&key);
    linSearch(arr,n,key);
}
