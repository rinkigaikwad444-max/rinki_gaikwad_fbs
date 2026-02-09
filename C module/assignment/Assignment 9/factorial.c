#include<stdio.h>
void factorial(int n[]);
void main()
{
	int n[1];
	printf("enter number to find factorial:");
	scanf("%d",&n);
	factorial(n);

}
void factorial(int n[])
{
	int i=1;
	int fact=1;
	while(i<=n[0])
	{
		fact=fact*i;
		i++;
	}
	printf("factorial of %d is %d",n[0],fact);	
}

