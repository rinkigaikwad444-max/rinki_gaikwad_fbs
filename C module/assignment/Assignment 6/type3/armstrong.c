#include<stdio.h>
//void armsrtong(int);
//void armsrtong(int n)
//{
//	int temp=n;
//	int sum=0;
//	
//	while(n!=0)
//	{
//	 int r=n%10;
//	 sum=sum+r*r*r;
//	 n=n/10;	 
//   }
//	if(sum==temp)
//	printf("Armstong");
//	else
//	printf("Not Armstong");
//}
//
//void main()
//{
//	int n;
//	printf("Enter 3 digit number to find armstrong or not:");
//	scanf("%d",&n);
//	armsrtong(n);
//}
void armstrong(int);
void armstrong(int n)
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
	if(temp==sum)
	printf("Armstrong");
	else
	printf("Not armstrong");
}
void main()
{
int n;
	printf("Enter number to find armstrong or not:");
	scanf("%d",&n);
	armstrong(n);	
}