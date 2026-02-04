#include<stdio.h>
void armstrong(int*);
void armstrong(int* n)
{
	int temp=*n; int counter=0; int sum=0;
	while(temp!=0)
	{
	 counter++;
	 temp=temp/10;
    }
    temp=*n;
    while(temp!=0)
    {
    	int digit=temp%10;
    	int pow=1;
    	for(int i=1;i<=counter;i++)
		{
			pow=pow*digit;
		}
		sum=sum+pow;
		temp=temp/10;
	}
	if(*n==sum)
	printf("Armstrong");
	else
	printf("Not armstrong");
}
void main()
{
int n;
	printf("Enter number to find armstrong or not:");
	scanf("%d",&n);
	armstrong(&n);	
}