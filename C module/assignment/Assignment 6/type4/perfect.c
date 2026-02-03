#include<stdio.h>
int perfect(int);
int perfect(int n)
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
	return 1;

	else 
	return 0;
	
}
void main()
{
int n;
printf("Enter number to find perfect or not:");
scanf("%d",&n);
int rs=perfect(n);
if(rs==1)
	printf("perfect number");
else
	printf("not perfect");	
}