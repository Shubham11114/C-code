#include<stdio.h>
void primeNum(int n );
int main() {
    int x ;
    printf("Enter number ");
    scanf("%d",&x);
    primeNum(x);
}

void primeNum(int n) {
	int count = 0;
	for (int i = 1; i <n ; i++)
	{
		if (n % i==0)
		{	count++;

		}
		if (count >2)
		{
			printf("Not a prime number\n");
			break;
		} else {
			printf(" prime number\n");
			break;
		}
	}
}