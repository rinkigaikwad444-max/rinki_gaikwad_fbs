#include<stdio.h>
void startEnd(int a[],int b[]);
void main()
{
	int a[1], b[1];
	printf("enter start and end");
	scanf("%d%d",&a[0],&b[0]);
	startEnd(a,b);
}
void startEnd(int a[], int b[])
{
	int sum=0;
	while(a[0]<=b[0])
	{
	sum=sum+ a[0];
	a[0]++;	
	}
	printf("%d",sum);
}
