#include<stdio.h>
void mystrcat(char str2[],char str[]);
void main()
{
	char str[]="first";
	char str2[]="bit";
	mystrcat(str,str2);
}
void mystrcat(char dest[],char src[])
{
	int i=0,j=0;
	while(dest[i]!='\0')
	{
		i++;
	}
	while(src[j]!='\0')
	{
		dest[i]=src[j];
		i++;
		j++;
	}
	dest[i]='\0';
	printf("cancatinated string is %s",dest);
}
