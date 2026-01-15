#include<stdio.h>
void main()
{
	int n=121;
	int firstnum=n%10;
	int lastnum=n/100;
	if(firstnum==lastnum)
	{
		printf("Palindrom");
	}
	else
	{
		printf("Non Palindrom");
	}
}