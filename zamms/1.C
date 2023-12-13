#include<stdio.h>
int main()
{
    int x=5;
    int y,z;
    y=x++;
    z=x++;
    printf("x=%d\ny=%d\nz=%d", x, y, z);
}