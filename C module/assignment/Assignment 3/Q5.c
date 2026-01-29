#include<stdio.h>
void main()
{
	int n= 153;
	int temp=n;
	int sum=0;
	
	while(n!=0)
	{
	 int r=n%10;
	 sum=sum+r*r*r;
	 n=n/10;	 
   }
	if(sum==temp)
	printf("Armstong");
	else
	printf("Not Armstong");


}