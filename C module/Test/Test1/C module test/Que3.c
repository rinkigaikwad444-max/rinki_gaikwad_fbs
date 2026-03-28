#include<stdio.h>
#include<string.h>

typedef struct
{
    int id;
    char desc[50];
    char status[50];
} Tasks;

Tasks t;

void add()
{
    printf("Enter id\n");
    scanf("%d", &t.id);

    printf("Enter description\n");
    scanf("%s", t.desc);

    printf("Enter Status\n");
    scanf("%s", t.status);    
}

void display()
{
    printf("ID: %d\n", t.id);
    printf("Description: %s\n", t.desc);
    printf("Status: %s\n", t.status);
}

void update()
{
    printf("Enter new description\n");
    scanf("%s", &t.desc);

    printf("Enter updated status\n");
    scanf("%s", &t.status);
}

int main()
{
    int ch;

    while(1)  
    {
        printf("\n1.Add , 2.Display, 3.Update,\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1: add();
                    break;
            case 2: display();
                    break;
            case 3: update();
                    break;
            default:
                    printf("Invalid choice");
        }
    }
}