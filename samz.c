//Q No. 25(f)
#include<stdio.h>
int main()
{ 
    char i,j,k;

    for(i=1; i<=4; i++)
    {
        char a='A';
        for(k=1; k<=4-i; k++)
        {
            printf(" ");
        }
        for(j=1; j<=(2*i-1); j++)
        {
            printf("%c", a++);
        }
        printf("\n");
    }
    return 0;
}

