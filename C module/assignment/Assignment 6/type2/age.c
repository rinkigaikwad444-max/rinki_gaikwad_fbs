#include<stdio.h>
int ageCalc();
void main()
{
int rs=ageCalc();	
if(rs==0)
printf("Senior");
else if(rs==1)
printf("Adult");
else if(rs==2)
printf("Teenager");	
else
printf("Child");	
}

int ageCalc(){
	int age;
	printf("Enter age:\n");
	scanf("%d",&age);
	if(age==0)
	printf("enter valid age");
	else if(age>=60)
	return 0;
	else if(age>=20 && age<=59 )
	return 1;
	else if(age>=12 && age<=19)
	return 2;
	else
	return 3;
	
}