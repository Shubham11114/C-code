#include<stdio.h>
int binarySearch(int array[],int size ,int target  ){
    int low =0 , high = size -1 , mid ;
    while ( low <= high ){
        mid = (low + high )/2;
        if ( array [mid]== target ){
            return mid ;
        }
        else if (array [mid]>target ){
            high = mid -1;
        }
        else {
            low = mid +1;
        }
    }
    return -1;

}

int main (){
    int n , target , result ;
    printf("Enter the number of elements in the array :  ");
    scanf("%d",&n);
    int array [n];
    printf(" Enter the array :\n");
    for ( int i = 0; i<n;i++){
        scanf("%d",&array[i]);
    }    
    printf("enter the element to search : ");
    scanf("%d",&target);
    result = binarySearch(array,n,target);
    if ( result != 1){
        printf("Element found at index %d \n",result);

    }else {
        printf("Element not found in the arary ");
    }
    return 0 ;
}