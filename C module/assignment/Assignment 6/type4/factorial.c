#include<stdio.h>
int factorial(int);
int factorial(int n)
{
	int i=1;
	int fact=1;
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
return fact;
}

void main()
{
	int n;
	printf("enter number to find factorial:");
	scanf("%d",&n);
	int rs= factorial(n);
	printf("factorial of %d is %d",n,rs);	
}