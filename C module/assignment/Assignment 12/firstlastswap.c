#include <stdio.h>
#include <string.h>

void main()
{
    char str[10]; 

    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);

    if(len == 0)
    {
        printf("Empty string\n");
    }

  for(int i=0;i<len;i++)
     {
 int temp=str[0];
 str[0]=str[len-1];
 str[len-1]=temp;
 
  }   

    printf("string: %s\n", str);

}
