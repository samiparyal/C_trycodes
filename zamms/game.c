#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int play(int choice);
int aesthetic();
int main() {
    play(aesthetic());
    return 0;
}
int aesthetic()
{
    int choice;
    printf("\t\t\tRochambeau GAME");
    printf("\t\t\t\n-----------------------------\n");
    usleep(100000);
    printf("\a\tRock\n");
    usleep(100000);
    printf("\a\tPaper\n");
    usleep(100000);
    printf("\a\tScissors\n");
    usleep(100000);
    printf("\t\t\t\n-----------------------------\n");
    printf("1>> Play with a friend");
    printf("\n2>> Play with a computer\n");
    usleep(100000);
    printf("\n-----------------------------\n\n");
    printf("Choose:\t");
    scanf("%d", &choice);
    printf("\t\t\t\n-----------------------------\n\n");
    return choice;
}
int play(int choice)
{
    switch (choice)
    {
        case 1:
            clrscr();
            printf("Playing with your friend");
            break;
            
        case 2:
            printf("Playing with computer");
            while(1)
            {
                printf(".");
            }
            break;
    }
    
}