#include<stdio.h>
void palindrome(int);
void palindrome(int n)
{
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
void main()
{
	int n;
	printf("Enter number to find palindrome or not:");
	scanf("%d",&n);
	palindrome(n);
	
}