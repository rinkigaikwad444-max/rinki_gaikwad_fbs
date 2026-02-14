#include <stdio.h>
void mystrstr(char str[], char sub[]);
void main()
{
    char s[] = "hello world";
    char sub[] = "world";

    mystrstr(s, sub);
}

void mystrstr(char str[], char sub[])
{
    int i, j,flag=0;

    for(i = 0; str[i] != '\0'; i++)
    {
        j = 0;

        while(sub[j] != '\0' && str[i + j] == sub[j])
        {
            j++;
        }

        if(sub[j] == '\0'){
		   
          flag=1;
            break;
        }
    }
if(flag==1)
   printf("Substring found str[%d]",i); 
   else
     printf("Substring not found");  
}
