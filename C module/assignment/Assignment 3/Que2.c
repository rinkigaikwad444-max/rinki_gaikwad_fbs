#include<stdio.h>
void main()
{
	int s1,s2,s3;
	printf("Enter 3 sides of triangle:");
	scanf("%d%d%d", &s1,&s2,&s3);
	if(s1==s2 && s1==s3 ) 
	printf("Equilatral triangle");
	else if(s1==s2 || s1==s3 || s2==s3)
	printf("isolatery ");
	else 
	printf("scaler");
	
}