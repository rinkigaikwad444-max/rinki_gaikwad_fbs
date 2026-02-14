#include<stdio.h>
void mystrchr(char str[], char ch);

void main()
{
    char str[]="firstbit";
	char ch='b';
    mystrchr(str, ch); 

}

void mystrchr(char str[], char ch)
{
    int i = 0;
    int flag = 0;  

    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            printf("Character '%c' found \n", ch);
            flag = 1;
            break;
        }
        i++;
    }

    if(flag == 0)
    {
        printf("Character '%c' not found in string\n", ch);
    }
}
