#include<stdio.h>
int main (){

    int a, b ;
    int x = 0;
    printf("Enter number");
    scanf("%d",&a);
    printf("Enter number");
    scanf("%d",&b);
    for (int i = a ;i<b ; i++)
    {
        if( (i+1) % i== 0){
            x++;
        } 
        if (x >2){
            printf("Not prime number present");
            break;
        }else{
            printf("%d\n",x);
        }
    }
    return 0;
}
