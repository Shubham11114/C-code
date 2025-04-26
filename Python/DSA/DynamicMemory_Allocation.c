#include<stdio.h>
#include<stdlib.h>

int main()
{   int n ;
    int *ptr ;
    printf("Enter the size of array ");
    scanf("%d",&n);
    ptr = (int*)malloc(n*(sizeof(int)));
    for (int i =0;i<n;i++){
    printf("Enter the %d index of array  : \n",i);
    scanf("%d",&ptr[i]);
    }
    for(int i =0;i<n;i++){
    printf("%d\n",ptr[i]);
    }
    int *new ;
    printf("Enter the new size of array : \n");
    scanf("%d",&n);
    new = (int*) realloc(ptr,n*(sizeof(int)));
    for (int i =0;i<n;i++){
    printf("Enter the %d index of new array  : \n",i);
    scanf("%d",&ptr[i]);
    }
    for(int i =0;i<n;i++){
    printf("%d\n",ptr[i]);
    }
    
    
    return 0;
}