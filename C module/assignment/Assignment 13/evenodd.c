#include<stdio.h>
#include<stdlib.h>
void evenOdd(int* n);
void main()
{
	int* n=(int*)malloc(sizeof(int));
	printf("Enter the number");
	scanf("%d",&n[0]);
	evenOdd(n);
}
void evenOdd(int n[])
{

	if (n[0]%2==0)
		printf("Even");
	else
		printf("Odd");
}
