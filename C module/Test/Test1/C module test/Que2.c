#include<stdio.h>
void mystrch(char);
void main()
{
	char str[10];
	char ch;
	char sys;
	printf("Enter a string\n");
	scanf("%s",&str);
	printf("Enter chacter to replace\n");
	scanf(" %c",&ch);
	printf("Enter symbol \n");
	scanf(" %c",&sys);
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]==ch)
		{
			 str[i]=sys;
			}	
	i++;
			
	}printf("updated String is %s",str);
}
	
	

