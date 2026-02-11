#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="Firstbeat";
	char str2[]="Education";
	char str3[]="Educa";
	printf("string 1=%s\t string 2=%s\n",str,str2);
    if(strcmp(str,str2)==0)
    printf("Equal string");
    else
    printf("Not equal string");
    printf("\n");
    if(strncmp(str2,str3,3)==0)
    printf("Equal string");
    else
    printf("Not equal string");
}