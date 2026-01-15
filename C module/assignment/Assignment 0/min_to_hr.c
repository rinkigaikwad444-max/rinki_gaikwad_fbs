#include<stdio.h>
void main()
{
	int min=140;
	int hr=min /60;
	int rem=min%60;
	printf("%d minutes means %d Hours",min,hr);
	printf(" and remening minutes is %d ", rem);
}