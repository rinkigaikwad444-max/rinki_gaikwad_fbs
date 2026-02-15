#include<stdio.h>
#include<stdlib.h>
void eligibleOrNot(int* age);
void main()
{
	
	int* age=(int*)malloc(sizeof(int*));
	printf("Enter the age:");
	scanf("%d",&age[0]);
	eligibleOrNot(age);
	
}

void eligibleOrNot(int* age)
{
	if(*age>=18)
		printf("Eligible to vote");
	else
		printf("Not eligible to vote");
	
}