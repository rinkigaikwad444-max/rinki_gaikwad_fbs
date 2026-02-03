#include<stdio.h>
int strong(int);
int strong(int n)
{
	int temp=n;
	int sum=0;
	while(n!=0)
	{
		int fact=1,i=1;
		int rem=n%10;
		while(i<=rem)
		{
			fact=fact*i;
			i++;
		}
		sum=sum+fact;
		n=n/10;
	}
	if(sum==temp)
		return 1;
	else 
		return 0;
}
void main()
{
	int n;
	printf("Enter number to find strong or not:");
	scanf("%d",&n);
	int rs=strong(n);
	if(rs==1)
		printf("Strong number");
	else 
		printf("not strong number");	
}