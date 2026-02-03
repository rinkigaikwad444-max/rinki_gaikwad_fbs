#include<stdio.h>
int armstrong(int);
int armstrong(int n)
{
	int temp=n; int counter=0; int sum=0;
	while(n!=0)
	{
	 counter++;
	 n=n/10;
    }
    n=temp;
    while(n!=0)
    {
    	int digit=n%10;
    	int pow=1;
    	for(int i=1;i<=counter;i++)
		{
			pow=pow*digit;
		}
		sum=sum+pow;
		n=n/10;
	}
	if (sum==temp)
	return 1;
	else
	return 0;
}
void main()
{
int n;
	printf("Enter number to find armstrong or not:");
	scanf("%d",&n);
  int result=armstrong(n);	
	if(result==1)
	printf("Armstrong");
	else
	printf("Not armstrong");
}