#include<stdio.h>
void main()
{
	char str[]="firstbeat";
	char str2[]="Education";
	char str3[]="Pune";
	printf("string before copy string 1=%s\t string 2=%s\n",str,str2);
	printf("string after copy string 1=%s\t string 2=%s\n",strcpy(str,str2));
	printf("string concatination:%s",strcat(str2,str3));
}