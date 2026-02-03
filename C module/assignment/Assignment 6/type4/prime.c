#include<stdio.h>	
int prime(int);
int prime(int n)
{
	int i=2, flag=0;
	while(i<n)
	{
		if(n%i==0)
		{	
		flag=1;
		break;
    	}
    	i++;
	}
	    if (flag==0)
	    return 1;
		else
		return 0;
}


void main()
{
	int n;
	printf("Enter number to find prime or not\n");
	scanf("%d",&n);
	int rs=prime(n);
	if(rs==1)
		printf("%d is prime",n);
	else
		printf("%d is not prime",n);
	
}