#include<stdio.h>
void result();
void main()
{
	 result();
}
void result()
{
	int marks;
	printf("Enter Marks ");
	scanf("%d",&marks);
	if (marks >75 )
		printf("Distinction");
	else if (marks >=65)
		printf("First class");	
		else if (marks>=55)
			printf("Second class");
			else if (marks >=40)
				printf("Pass Class");
				else
				printf("Fail");
}