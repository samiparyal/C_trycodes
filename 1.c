#include<stdio.h>
int main()
{
    int n, i, j, a[100], temp;
    printf("How many numbers you want to enter?(<100)\t");
    scanf("%d", &n);
    printf("Enter the %d numbers:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
     for(j=i+1; j<n; j++)
        {
            if(a[i]<a[j])
            {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
            }
        }
    }    
    printf("The maximum number is %d and the minimum number is %d", a[0], a[n-1]);
    return 0;
    
}