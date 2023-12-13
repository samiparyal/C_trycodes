//This program implements the bitwise operator
#include <stdio.h>
int main()
{
    int num1=50, num2=100;
    int AND, OR;
    AND = num1 & num2;
    OR = num1 | num2;
    printf("Bitwise AND => %d\n", AND);
    printf("Bitwise OR => %d\n", OR);
    return 0;
        
}
