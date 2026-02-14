#include<stdio.h>
void mystrcpy(char str2[],char str[]);
void main()
{    
    char str[]="hello";
    printf("original string %s",str);
    char str2[10];
	mystrcpy(str2,str);
}
void mystrcpy( char str2[], char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		str2[i]=str[i];
		i++;
	}
	str2[i]='\0';
	printf("\n copied string %s",str2);
}