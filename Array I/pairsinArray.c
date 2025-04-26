#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int x =12;
    int Totalpairs=0;
    
    for (int i = 0; i <=7; i++)
    {
        for(int j = i+1;j<=7;j++){
            if(arr[i]+arr[j]==x){
               
                Totalpairs++;
                printf("(%d,%d)",arr[i],arr[j]);
            }
        }

    }
    printf("\n%d Pairs ",Totalpairs);
    
    return 0;
}