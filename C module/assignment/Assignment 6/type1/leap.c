#include<stdio.h>
void leapOrNot();
void main()
{
	leapOrNot();
}
void leapOrNot()
{
	int year=2024;
	if(year%400==0 ||year%4==0 && year%100!=0   )
		printf("Leap year");
	else 
		printf("Not Leap Yeap");

}

