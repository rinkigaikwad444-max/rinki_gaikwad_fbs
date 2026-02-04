#include<stdio.h>
void startEnd(int*,int*);
void main()
{
	int start, end;
	printf("enter star and end");
	scanf("%d%d",&start,&end);
	startEnd(&start,&end);
}
void startEnd(int* a, int *b)
{
	int sum=0;
	while(*a<=*b)
	{
	sum=sum+ *a;
	(*a)++;	
	}
	printf("%d",sum);
}
