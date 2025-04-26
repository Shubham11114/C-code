#include<stdio.h>
int main (){
    int count;
    int arr[]={2,4,5,2,4,6,8,8};
    for (int i = 0; i < 8; i++)
    {
       for (int j = 0; j < 8; j++)
       {
       if (arr[i]==arr[j])
       {
        count++;
       }
       
       }
       
    }
    printf("%d\n",count);
}