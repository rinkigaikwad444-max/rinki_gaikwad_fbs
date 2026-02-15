#include <stdio.h>
void searchElement(char* str,char ch);
void main()
{
    char str[10];
    char ch;
    
    
    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a character to search: ");
    scanf(" %c", &ch);  
	searchElement(str,ch);
}
	void searchElement(char* str,char ch){
	int found = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            printf("Character found at index %d", i);
            found = 1;
            break;   
        }
    }

    if(found == 0)
        printf("Character not found");

}
