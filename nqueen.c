#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define MAX 100
int x[MAX];

//k-row i-column  abs(column-column)==abs(row-row)
bool place(int k,int i){
    for(int j=1;j<k;j++){
        if( x[j]==i || abs(x[j]-i) == abs(j-k)) return false;
    }
    return true;
}

void nQueen(int k,int n){
    for(int i=1;i<=n;i++){
        if(place(k,i)==true){
            x[k]=i;
            if(k==n){
                //output array after reaching all queen
                for(int j=1;j<=n;j++)printf("%d ",x[j]);
                printf("\n");
            }
            else nQueen(k+1,n);
        }
    }
}
int main(){
    int n;
    printf("enter no. of queens\n");
    scanf("%d",&n);
    nQueen(1,n);
    return 0;
}