#include<stdio.h>
void main()
{   int i;
	int range;	
	printf("Enter range");
	scanf("%d",&range);
	
	for(i=1;i<=range;i++)
	{
		int temp=i;int sum=0;
		int count=0;
		while(temp!=0)
		{
			count++;
			temp=temp/10;
		}	
		temp=i;
		while(temp!=0)
		{
			int rem=temp%10;
			int res=1;
			for(int j=1; j<=count;j++)
			{
				res=res*rem;
			}
			sum=sum+res;
			temp=temp/10;
			
		}		
	if(sum==i)
	printf("\n %d is Armstrong number",i);
}
}