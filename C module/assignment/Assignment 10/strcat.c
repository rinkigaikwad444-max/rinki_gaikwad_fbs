#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="Firstbeat";
	char str2[]="Education";
	char str3[]="FBS";
	printf("before string 1=%s\t string 2=%s\n",str,str2);
	printf("\nString concat:%s",strcat(str,str3));
	printf("\nString concat:%s",strncat(str,str2,5));

	
}