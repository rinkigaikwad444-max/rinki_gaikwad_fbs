#include<stdio.h>
void sum(int);
void sum(int n)
{
	int last;
	last=n%10;
	while(n>=10)
	{
		n=n/10;
	}
	printf("sum=%d",last+n);
}
void main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	sum(n);
	
}