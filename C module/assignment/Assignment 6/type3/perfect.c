#include<stdio.h>
void perfect(int);
void perfect(int n)
{
	int temp=n;
	int i=1;
	int sum=0;
	while(i<n)
	{
		if(n%i==0)
		{
	 		sum=sum+i;	
		}
			i++;
	}
	if(temp==sum)
	printf("perfect number");
	else 
	printf("not perfect");
}
void main()
{
int n;
printf("Enter number to find perfect or not:");
scanf("%d",&n);
perfect(n);
	
}