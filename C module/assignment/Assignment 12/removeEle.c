#include <stdio.h>
#include <string.h>
void removeElement(char str[], int );
void main()
{
    char str[10];
    int n;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter the index to remove: ");
    scanf("%d", &n);

  
removeElement(str,n);
}
void removeElement(char str[],int n)
{
	 int len = strlen(str);
	if(n < 0 || n >= len)
	    {
	        printf("Invalid index\n");
	    }
	
    for(int i = n; i < len; i++)
    {
        str[i] = str[i + 1];
    }

    printf("Modified string: %s\n", str);

}
