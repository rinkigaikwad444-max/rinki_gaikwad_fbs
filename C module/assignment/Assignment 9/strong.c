#include<stdio.h>
void strong(int n[]);
void main()
{
	int n[1];
	printf("Enter number to find strong or not:");
	scanf("%d",&n);
	strong(n);	
}
void strong(int n[])
{
	int temp=n[0];
	int sum=0;
	while(temp!=0)
	{
		int fact[10];
		fact[0]=1;
		int i=1;
		int rem=temp%10;
		while(i<=rem)
		{
			fact[i]=fact[i-1]*i;
			i++;
		}
		sum=sum+fact[rem];
		temp=temp/10;
	}
	if(sum==n[0])
	printf("Strong number");
	else
	printf("not strong number");

}
