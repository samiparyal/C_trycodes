#include<stdio.h>
struct employee
{
    int id;
    char name[30];
};
void display (struct employee[]);

int main()
{
    struct employee e[3];
    int i;
    for(i=0; i<3; i++)
    {
        printf("\nEnter name:\t");
        fgets(e[i].name, 30, stdin);
        // scanf("%s", e[i].name);
        printf("Enter ID:\t");
        scanf("%d", e[i].id);
    }
    display(e);
    return 0;
}
void display (struct employee ee[])
{
    int i;
    for(i=0; i<3; i++)
    {
        // printf("\nEmployee=%d", ee[i].id);
        printf("\nName=%s", ee[i].name);
    }
}
