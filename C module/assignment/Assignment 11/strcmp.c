#include<stdio.h>
int mystrcmp(char str[],char str2[]);
void main()
{
	char str[]="first";
	char str2[]="bit";
int rs=	mystrcmp(str,str2);	
	if(rs==0)
	printf("Equal");
	else if(rs>0)
	printf(" first string is grater");
	else
	printf(" second string is grater");
		
}
int mystrcmp(char str[],char str2[])
{
	int i=0;int r;
	while(str[i]!='\0'&&str2[i]!='\0')
	{
		if(str[i]!=str2[i])
		{
			  str[i]-str2[i];
		}i++;
	}

	return str[i]-str2[i];
	
}