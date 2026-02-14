#include<stdio.h>
int mystrcmp(char str[],char str2[],int n);
void main()
{
	char str[]="apple";
	char str2[]="applecation";
	int n=4;
int rs=	mystrcmp(str,str2,n);	
	if(rs==0)
	printf("Equal");
	else if(rs>0)
	printf(" first string is grater");
	else
	printf(" second string is grater");
		
}
int mystrcmp(char str[],char str2[],int n)
{
	int i=0;int r;
	while(str[i]!='\0'&&str2[i]!='\0')
	{
		if(str[i]!=str2[i])
		{
			 return str[i]-str2[i];
		}i++;
		if(str[i]=='\0'||str[i]=='\0')
		{
			break;
		}
	}

	
	
}