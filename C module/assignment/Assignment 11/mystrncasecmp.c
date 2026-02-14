#include <stdio.h>
int mystrncasecmp(char str1[], char str2[], int );
void main()
{
    char s1[] = "firstbit";
    char s2[] = "first";
    int n = 3;

    if(mystrncasecmp(s1, s2, n) == 0)
        printf("characters are equal");
    else
        printf("characters are not equal");
}

int mystrncasecmp(char str1[], char str2[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        char ch1 = str1[i];
        char ch2 = str2[i];
        if(ch1 >= 'A' && ch1 <= 'Z')
            ch1 = ch1 + 32;

        if(ch2 >= 'A' && ch2 <= 'Z')
            ch2 = ch2 + 32;

        if(ch1 != ch2)
            return ch1 - ch2;

        if(ch1 == '\0' || ch2 == '\0')
            break;
    }

    return 0;
}
