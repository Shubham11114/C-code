#include<stdio.h>
int main (){
    int n ; 
    printf("Enter number of Lines :");
    scanf("%d",&n);
    int a =n;
    for (int i = 1; i <=n; i++)
    {
      for (int j = 1; j <=i; j++)
      {
       printf("*");
      }
  
    printf("\n");
   
    }
   
}