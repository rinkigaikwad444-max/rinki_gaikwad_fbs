#include<stdio.h>
void strong(int);
void strong(int n)
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
	printf("Strong number");
	else
	printf("not strong number");

}

void main()
{
	int n;
	printf("Enter number to find strong or not:");
	scanf("%d",&n);
	strong(n);
	
}