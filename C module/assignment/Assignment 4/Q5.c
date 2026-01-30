#include<stdio.h>
void main()
{
	printf("1. To check even or odd\n");
	printf("2. To check prime or not\n");
	printf("3. To check palindrome or not\n");
	printf("4. To check positive or negative or zero\n");
	printf("5. To check sum of digit\n");
	int choice;
	printf("Enter choice:");
	scanf("%d",&choice);
	
	if (choice==1)
	{
		int n;
		printf("Enter number:");
		scanf("%d",&n);
		if(n%2==0)
		printf("even");
		else
		printf("Odd");
	}
	else if(choice==2)
	{
		int n; int flag=0;
		printf("Enter number:");
		scanf("%d",&n);
		for(int i=2;i<n;i++)
		{
			if(n%i==0)
				flag=1;
				break;
		}
		if(flag==0)
			printf("prime");
			else
			printf("not prime");
	}
	
	else if(choice==3)
	{
		int n; int sum=0;
		printf("Enter number:");
		scanf("%d",&n);
		int temp=n;
		for(int i=1;i<n;i++)
		{
			if(n%i==0)
			sum=sum+i;
		}
		if(temp==sum)
		printf("Perfect");
		else
		printf("not Perfect");
	}
	else if(choice==4)
	 {
		int n;
		printf("Enter number");
		scanf("%d",&n);
		if(n>0)
		printf("Positive");
		else if(n<0)
		printf("Negative");
		else 
		printf("zero");
		
	}
	
	else if(choice==5)
	{
		int n; int sum=0; int r;
		printf("Enter number:");
		scanf("%d",&n);
		while(n>0)
		{
			r=n%10;
			sum=sum+r;
			n=n/10;	
		}
		printf("%d",sum);
	
}
}