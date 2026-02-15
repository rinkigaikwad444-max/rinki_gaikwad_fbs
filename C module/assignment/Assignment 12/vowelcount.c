#include <stdio.h>
#include <string.h>

void main()
{
    char str[10];
    int count = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    char vowels[] = "aeiouAEIOU";

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(strchr(vowels, str[i]) != NULL)
            count++;
    }

    printf("Number of vowels: %d\n", count);

}
