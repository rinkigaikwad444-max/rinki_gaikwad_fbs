#include<stdio.h>
#include<stdlib.h>

void startEnd(int* a, int* b);

void main()
{
    int *a = (int*)malloc(sizeof(int));
    int *b = (int*)malloc(sizeof(int));

    if(a == NULL || b == NULL)
    {
        printf("Memory allocation failed");
    }

    printf("Enter start and end: ");
    scanf("%d%d", a, b);

    startEnd(a, b);

    free(a);
    free(b);

}

void startEnd(int* a, int* b)
{
    int sum = 0;

    while(*a <= *b)
    {
        sum = sum + *a;
        (*a)++;
    }

    printf("Sum = %d", sum);
}
