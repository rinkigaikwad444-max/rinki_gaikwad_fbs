#include<stdio.h>
void main()
{
	int n=28;
	int temp=n;
	int i=1;
	int sum=0;
	while(i<n)
	{
		if(n%i==0){
	
		sum=sum+i;
		
			}
			i++;
	}
	if(temp==sum)
	printf("perfect number");
	else 
	printf("not perfect");
}