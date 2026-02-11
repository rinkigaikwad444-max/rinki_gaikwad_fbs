#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char str[]="Firstbeat";
	char set[]="pune";
	char charset[]="district";
	char str3[]="punedistrict";
	printf("%s",strlwr(str));
	printf("\n%s",strupr(str));
    char *temp=strdup(str3);
    printf("\n%s",temp);
    
    int rs=strspn(str3,set);
    printf("\nmatching charaters:%d",rs);
     int res=strcspn(str3,charset);
    printf("\nnotmatching charaters:%d",res);
    
}