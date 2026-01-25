#include<stdio.h>
void main()
{
	int n=145;
	int temp=n;
	int sum=0;
	while(n!=0)
	{
		int fact=1,i=1;
		int digit=n%10;
		while(i<=digit)
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