#include<stdio.h>
int divisibleBy();
int n;
void main()
{
	
	printf("Enter number:");
	scanf("%d",&n);
	int rs=divisibleBy();
	if(rs==0)
	printf("%d is divisible by both 3 & 5",n);
	else if(rs==1)
	printf("%d is divisible by 3 but not 5",n);
	else if (rs==2)
	printf("%d not divisible by 3 but divisible by 5",n);
    else
	printf("%d is not divisible by both");	
	
}
int divisibleBy(){
	if(n%3==0 && n%5==0)
	return 0;
	else if(n%3==0 && n%5!=0)
	return 1; 
	else if(n%3!=0 && n%5==0)
	return 2;
	
	
}