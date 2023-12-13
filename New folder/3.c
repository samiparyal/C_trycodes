#include<stdio.h>
int main()
{
    int n, i, a[100], pos;
    printf("How many numbers you want to enter?(<100)\t");
    scanf("%d", &n);
    printf("Enter the %d numbers:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter which position of the array you want to delete:\t");
    scanf("%d", &pos);
    for(i=pos; i<n-1; i++)
    {
        a[i]=a[i+1];
    }  
    printf("The final undeleted elements of the array are:\n");
    for(i=0; i<n-1; i++)
    {
        printf("\n %d", a[i]);
    }
    return 0;
}