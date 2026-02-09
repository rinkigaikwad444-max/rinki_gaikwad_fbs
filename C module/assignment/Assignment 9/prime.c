#include<stdio.h>	
void prime(int n[]);
void main()
{
	int n[1];
	printf("Enter number to find prime or not\n");
	scanf("%d",&n);
	prime(n);
}
void prime(int n[])
{
	int i=2, flag=0;
	while(i<n[0])
	{
		if(n[0]%i==0)
		{	
		flag=1;
		break;
    	}
    	i++;
	}
	    if (flag==0)
			printf("%d is prime",n[0]);
		else
		printf("%d is not prime",n[0]);
}

