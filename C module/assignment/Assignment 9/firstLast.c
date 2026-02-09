#include<stdio.h>
void sum(int n[]);
void main()
{
	int n[1];
	printf("enter the number:");
	scanf("%d",&n);
	sum(n);
	
}
void sum(int n[])
{
	int last;
	last=n[0]%10;
	while(n[0]>=10)
	{
		n[0]=n[0]/10;
	}
	printf("sum=%d",last+n[0]);
}
