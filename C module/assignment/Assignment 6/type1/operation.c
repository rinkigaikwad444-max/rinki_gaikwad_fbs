#include<stdio.h>
void operation();
void main()
{
	operation();
	
}
void operation()
{
	int n1, n2;
	char ch;
	printf("Enter Two numbers:");
	scanf("%d%d",&n1,&n2);
	printf("\nEnter operation to perform: +,-,/, %% ,* \n ");
	scanf(" %c",&ch);
	if(ch== '+')
	printf("Addition=%d",n1+n2);
	if(ch== '-')
	printf("Substraction=%d",n1-n2);
	if(ch== '/')
	printf("Division=%d",n1/n2);
	if(ch== '%')
	printf("Remainder=%d",n1%n2);
	if(ch== '*')
	printf("Multiplication=%d",n1*n2);
}