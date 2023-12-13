#include<stdio.h>
#include<math.h>
int power(double x, int n);
int main()
{
    int n;
    double x;
    printf("Enter the number:\t");
    scanf("%lf", &x);
    printf("Enter the power:\t");
    scanf("%d", &n);
    printf("The power(%d) of the number %.1lf is %d", n, x, power(x,n));
    return 0;
}
int power(double x, int n)
{
    return pow(x,n);
}