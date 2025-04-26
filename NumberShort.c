#include<stdio.h>
int main(){
    int arr[5]={1,4,2,3,5};
    
    for(int i =0;i<5;i++){
        printf("Array is : %d\n",arr[i]);
    }
    for(int j =0;j<5;j++){
        if(arr[0]<arr[j+1]){
            arr[0]=arr[j];
        
        printf("ARRAY IS : %d\n",arr[j]);
        }
    }
    return 0;
}