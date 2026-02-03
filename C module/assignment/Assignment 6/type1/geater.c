#include<stdio.h>
void compareGreater();
void main()
{
	compareGreater();	
}

void compareGreater()
{
int a, b, c;
	printf("Enter three numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("a is grater");
	}
	else if(b>a && b>c)
			printf("b is greater");
		
		else 
		printf("c is grater");	
	
}