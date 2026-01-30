#include<stdio.h>
void main()
{   int i;
	int range;
	
	printf("Enter range");
	scanf("%d",&range);
	for(i=1;i<=range;i++)
	{
		int temp=i;int sum=0;
		while(temp!=0)
		{
			int rem=temp%10;
			int fact=1;
			for(int j=1;j<=rem; j++)
			{
				fact=fact*j;
			}
			sum=sum+fact;
			temp=temp/10;
		}
	
	if(sum==i)
	printf("\n %d is stong number",i);
}
}