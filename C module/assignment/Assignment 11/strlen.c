#include<stdio.h>
void mystrlen(char str[]);
void main()
{    
    char str[]="hello";
	mystrlen(str);
}
void mystrlen(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	printf("%d",i);
}