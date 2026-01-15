#include<stdio.h>
void main()
{
	int no=327;
	int r1,r2,temp,r3;
	r1=no%10;
	temp=no/10;
	r2=temp%10;
	r3=temp/10;
	int sum=r1+r2+r3;
	printf("sum= %d",sum);
	
}