#include<stdio.h>
#include<stdlib.h>
void armstrong(int* n);
void main()
{
int* n=(int*)malloc(sizeof(int));
	printf("Enter number to find armstrong or not:");
	scanf("%d",&n[0]);
	armstrong(n);
	free(n);	
}
void armstrong(int* n)
{
	int temp=n[0]; int counter=0; int sum=0;
	while(temp!=0)
	{
	 counter++;
	 temp=temp/10;
    }
    temp=n[0];
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
	if(n[0]==sum)
	printf("Armstrong");
	else
	printf("Not armstrong");
}
