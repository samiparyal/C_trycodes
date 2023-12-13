#include<stdio.h>
#include<stdlib.h>
// for just one character-->
int main()
{
    char small;
    printf("\n\nEnter a character to find its capital:\t");
    scanf("%c", &small);
    char cap = toupper(small);
    // char cap = (int) small - 32;
    printf("Its Capital = %c", cap);
}

// for strings-->
// int main()
// {
//     char str[30];
//     printf("\n\nEnter a string:\t");
//     scanf("%[^\n]", &str);
//     for(int i=0; str[i]!='\0'; i++)
//     {
//         if(str[i]>=97 && str[i]<=122)
//         {
//            str[i]-=32;
//         }      
//     }
//     printf("Its Capital = %s", str);
// }
