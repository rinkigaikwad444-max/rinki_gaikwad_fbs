#include<stdio.h>
void table(int);
void table(int n)
{
	int i=1;
	while( i<=10)
	{
		printf("\t %d",n*i);
		i++;
		
	}
}


void main()
{
	table(5);	
}