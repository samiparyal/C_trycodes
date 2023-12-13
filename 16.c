#include<stdio.h>
void circularshift(int *a, int *b, int *c);
void main()
{
    int x, y, z;

    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("Enter z: ");
    scanf("%d", &z);

    printf("Before Shift: x: %d\ty: %d\tz: %d",x,y,z);
    circularshift(&x, &y, &z);
    printf("\nAfter Shift: x: %d\ty: %d\tz: %d",x,y,z);
}
void circularshift(int *a, int *b, int *c)
{
    int temp;
    temp = *c;
    *c = *b;
    *b = *a;
    *a = temp;
}