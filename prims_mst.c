#include<stdio.h>
#define inf 32000

void main(){
    //graph
    int arr[6][6]={ {0,3,0,0,6,5},
                    {3,0,1,0,0,4},
                    {0,1,0,6,0,4},
                    {0,0,6,0,8,5},
                    {6,0,0,8,0,2},
                    {5,4,4,5,2,0} };
    int i,j;
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    //logic

    int select[6]={0,0,0,0,0,0},c=0,sum=0,x,y;
    select[0]=1;
    while(c<5){
        int min =inf;
        for(i=0;i<6;i++){
            if(select[i]==1){
                for(j=0;j<6;j++){
                    if(arr[i][j]!=0 && select[j]==0){
                        if(min>=arr[i][j]){
                            min=arr[i][j];
                            x=i;
                            y=j;
                        }
                    }
                }
            }
        }
        select[y]=1;
        sum+=min;
        c++;
        printf("(%d %d),",x,y);
    }
    printf("\ntotal cost: %d",sum);

}