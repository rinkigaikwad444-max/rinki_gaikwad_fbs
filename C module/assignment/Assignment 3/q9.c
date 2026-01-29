#include<stdio.h>
void main()
{
	int n=121;
	int temp=n;
	int r, rev=0;
	while(n!=0)
	{
	r=n%10;
	rev=rev*10+r;
	n=n/10;	
	}
	if(temp==rev)
	printf("Palindrom");
	else
	printf("not palindrom");
}