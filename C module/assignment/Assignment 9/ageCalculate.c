#include<stdio.h>
void ageCalc(int age[]);
void main()
{
int age[1];
printf("Enter age:");
scanf("%d",&age[0]);	
 ageCalc(age);		
}

void ageCalc(int age[]){
	if(age[0]==0)
	printf("enter valid age");
	else if(age[0]>=60)
	printf("Senior");
	else if(age[0]>=20 && age[0]<=59 )
	printf("Adult");
	else if(age[0]>=12 && age[0]<=19)
	printf("Teenager");	
	else
	printf("Child");
	
}