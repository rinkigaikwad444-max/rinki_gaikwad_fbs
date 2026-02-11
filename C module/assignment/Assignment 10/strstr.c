#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="Firstbeat";
	char str2[]="Firstbeat solution Pune";
	printf("%s",strstr(str,"s"));
	char* token=strtok(str2," ");
	while(token!=NULL)
	{
		printf("\n %s",token);
		token=strtok(NULL," ");
	}
	printf("\nreverse %s",strrev(str));
}