#include<stdio.h>
void sumDigit(int start,int end)
{
	int sum=0;
	while( start<=end)
	{
		sum=sum+start;
		start++;
	}
	printf("%d",sum);
}
void main()
{
	int start,end;
	printf("Enter start and end\n");
	scanf("%d%d",&start,&end);
	sumDigit(start,end);
}