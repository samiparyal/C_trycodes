#include<stdio.h>
int main()
{
    int n, max, min, i, num;
    printf("How many numbers you want to enter?(<100)\t");
    scanf("%d", &n);
    printf("Enter the first number:\t");
    scanf("%d", &max);
    min=max;
    printf("Enter other numbers:\t");
    for(i=2; i<=n; i++)
    {
        printf("\nEnter number%d:\t", i);
        scanf("%d", &num);
        if(num>max)
        {
            max=num;
        }
        if(num<min)
        {
            min=num;
        }
    }
    printf("The maximum one is %d and the minimum one is %d", max, min);
    return 0;
}
