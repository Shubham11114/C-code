#include<stdio.h>

    void LinearSearch( int arr[],int n,int size ){
        
    }
int main (){
int size = 9;
int arr[]= {1,2,3,4,5,6,7,8,9};
int n ;
printf("Enter the number you want to search :");
scanf("%d",&n);
for (int i =0; i<size;i++){
    if (arr[i]==n)
    {
        printf("Number is found at %d Index  ",i+1);
    }
    
}

    return 0;
}