#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="Firstbeat";
    if(strchr(str,'b'))
    printf("found");
    else
    printf("Not found");
    printf("\n");
    if(strrchr(str,'a'))
    printf("found");
    else
    printf("Not found");
	
}