#include <stdio.h>
int main()
{
    int a=10, b=5, c=20;
    printf("\n a<b && a<c => %d", (a<b && a<c));
    printf("\na>b&&b<c => %d", (a>b && b<c));
    printf("a<b || a<c => %d", (a<b || a<c));
    printf("\n a>c || a>c => %d", (a>c || a>c));
    return 0;
        
}
