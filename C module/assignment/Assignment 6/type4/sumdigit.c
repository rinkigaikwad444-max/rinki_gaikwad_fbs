#include<stdio.h>
int sumDigit(int start,int end)
{
	int sum=0;
	while( start<=end)
	{
		sum=sum+start;
		start++;
	}
	return sum;
}
void main()
{
	int start,end;
	printf("Enter start and end\n");
	scanf("%d%d",&start,&end);
	int rs=sumDigit(start,end);
	printf("%d",rs);
}