#include<stdio.h>
void mystrncpy(char str2[],char str[], int n);
void main()
{    int n=2;
    char str[]="hello";
    printf("original string %s",str);
    char str2[10];
	mystrncpy(str2,str,n);
}
void mystrncpy( char str2[], char str[],int n)
{
	int i=0; 
	while(str[i]!='\0'&& i<n)
	{
		str2[i]=str[i];
		i++;
	}
	str2[i]='\0';
	printf("\n copied string %s",str2);
}