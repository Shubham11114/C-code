#include<stdio.h>
int main (){
int n =4;
int nsp =1;
for (int i = 1; i <=n; i++)
{
 for (int j = 1; j <= n-i; j++)
 {
   printf(" ");
 }
 for (int k = 1; k <=nsp; k++)
 {
  printf("*");
 }
 nsp = nsp+2;
 printf("\n");
 
}




    return 0;
}
