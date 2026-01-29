#include<stdio.h>
void main()
{
	int sum=0;
	int start=1,end=5;
	while( start<=end)
	{
		
		sum=sum+start;
		start++;
	}
	printf("%d",sum);
}