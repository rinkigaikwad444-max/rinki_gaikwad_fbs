#include<stdio.h>
int sum(int);
int sum(int n)
{
	int last;
	last=n%10;
	while(n>=10)
	{
		n=n/10;
	}
	int add=last+n;
	return add;
}
void main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	int rs=sum(n);
	printf("sum=%d",rs);
	
}