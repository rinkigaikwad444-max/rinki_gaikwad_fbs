#include<stdio.h>
#include<stdlib.h>
void sum(int* n);
void main()
{
	int* n=(int*)malloc(sizeof(int));
	printf("enter the number:");
	scanf("%d",&n[0]);
	sum(n);
	free(n);
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
