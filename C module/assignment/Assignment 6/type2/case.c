#include<stdio.h>
int lowerUpper();

void main()
{
	lowerUpper()?	printf("Uppercase"):	printf("lowercase");	
}
int lowerUpper()
{
char ch='r';
	if(ch<=97 && ch>=65)
	return 1;
	else
	return 0;
}