#include <stdio.h>
void mystrrchr(char str[], char ch);
void main()
{
    char s[] = "hello world";
    char ch = 'o';

     mystrrchr(s, ch);

    
}

void mystrrchr(char str[], char ch)
{
    int i = 0;
    int pos = -1;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
            pos = i;   
        i++;
    }

    if(pos != -1)
        printf("Element found at str[%d]",pos);
    else
        printf("Element not found" );
}

