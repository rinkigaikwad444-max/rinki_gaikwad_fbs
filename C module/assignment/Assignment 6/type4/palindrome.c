#include<stdio.h>
int palindrome(int);
int palindrome(int n)
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
	return 1;
	else
	return 0;

}
void main()
{
	int n;
	printf("Enter number to find palindrome or not:");
	scanf("%d",&n);
	int rs=palindrome(n);
	if(rs==1)
	printf("Palindrom");
	else
	printf("not palindrom");	
	
	
}