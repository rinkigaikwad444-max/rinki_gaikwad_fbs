#include<stdio.h>
void table(int n[]);
void main()
{
	int num[1];
	printf("Enter number to find table");
	scanf("%d",num);
	table(num);
	
}

void table(int n[])
{
	int i=1;
	while( i<=10)
	{
		printf("\t %d",n[0]*i);
		i++;
		
	}
}
