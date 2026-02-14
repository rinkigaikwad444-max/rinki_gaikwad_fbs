#include<stdio.h>
void mystrcat(char str2[],char str[],int n);
void main()
{
	char str[]="firstbit";
	char str2[]="Pune";
	int n=2;
	mystrcat(str,str2,n);
}
void mystrcat(char dest[],char src[],int n)
{
	int i=0,j=0;
	while(dest[i]!='\0' )
	{
		i++;
	}
	while(j<n && src[j]!='\0')
	{
		dest[i]=src[j];
		i++;
		j++;
	}
	dest[i]='\0';
	printf("cancatinated string is %s",dest);
}
