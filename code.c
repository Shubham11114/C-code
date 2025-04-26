#include<stdio.h>
int LargestNumber(int arr[], int size);

int main () {

    int arr[]= {1,3,5,52,5,2,6,8};
	LargestNumber(arr,8);
	return 0;
}
int LargestNumber( int arr [], int size  ) {
	//int size = sizeof(int )/sizeof(arr[0]);
	int n ;
	n = arr[0];
	for (int i = 0; i < size; i++)
	{
		if( n < arr[i])
		{
			n = arr[i];
		}
	}
	printf("%d", n );
	return n ;
}