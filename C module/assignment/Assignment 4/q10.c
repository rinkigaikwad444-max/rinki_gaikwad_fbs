#include<stdio.h>
void main()
{
	int n=12345;
	int r;
	r=n%10;
	while(n>=10)
	{
		n=n/10;
	}
	printf("sum=%d",r+n);
}