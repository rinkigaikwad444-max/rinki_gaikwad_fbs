#include<stdio.h>
void strong(int*);
void strong(int* n)
{
	int temp=*n;
	int sum=0;
	while(temp!=0)
	{
		int fact=1,i=1;
		int rem=temp%10;
		while(i<=rem)
		{
			fact=fact*i;
			i++;
		}
		sum=sum+fact;
		temp=temp/10;
	}
	if(sum==*n)
	printf("Strong number");
	else
	printf("not strong number");

}

void main()
{
	int n;
	printf("Enter number to find strong or not:");
	scanf("%d",&n);
	strong(&n);
	
}