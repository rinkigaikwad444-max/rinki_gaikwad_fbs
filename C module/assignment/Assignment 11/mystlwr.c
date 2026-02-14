#include<stdio.h>
void mystrupr(char str[]);
void main()
{
	char str[]="HELLO";
	mystrupr(str);
}

void mystrupr(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>='A'&&str[i]<='Z')
		{
			str[i]=str[i]+32;
		}i++;
	}
	printf("string %s",str);
}