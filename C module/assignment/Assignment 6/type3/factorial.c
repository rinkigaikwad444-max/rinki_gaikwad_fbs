#include<stdio.h>
void factorial(int);
void factorial(int n)
{
	int i=1;
	int fact=1;
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("factorial of %d is %d",n,fact);	
}

void main()
{
	int n;
	printf("enter number to find factorial:");
	scanf("%d",&n);
	factorial(n);

}