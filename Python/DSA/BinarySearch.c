#include<stdio.h>
int binarySearch(int arr[],int size,int element){
    int low,mid,high;
    low = 0;
    high =size-1;
    while (low<=high)
    {
     mid =(low+high)/2;
    if (arr[mid]==element){
     return mid;
   }
   if(arr[mid]<element){
    low=mid+1;
   }else{
    high=mid-1;
   }
    }
    return -1;
}
int main(){
    int arr[]={2,3,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
    int element;
    printf("Enter the element that you want to search in this given array");
    scanf("%d",&element);
    int index = binarySearch(arr,size,element);
    printf("Element %d found at %d index",element,index);
    
    return 0;
}