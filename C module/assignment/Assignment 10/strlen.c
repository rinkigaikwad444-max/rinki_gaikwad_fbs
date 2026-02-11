#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="Firstbeat";
	char str2[]="Education";
	char str3[]="Pune";
	printf("before string 1=%s\t string 2=%s\n",str,str2);
	printf("\nLength of string %s is %d\n",str,strlen(str));
	int rs=strcpy(str,str2);
	printf("\n%s",rs);
	printf("After string 1=%s\t string 2=%s\n",str,str2);
	int res =strncpy(str2,str3,4);
	printf("\n%s",res);

	
}