#include<stdio.h>
void eligibleOrNot(int age[]);
void main()
{
	int age[1];
	printf("Enter the age:");
	scanf("%d",&age[0]);
	eligibleOrNot(age);
	
}

void eligibleOrNot(int age[])
{
	if(age[0]>=18)
		printf("Eligible to vote");
	else
		printf("Not eligible to vote");
	
}