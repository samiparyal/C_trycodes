#include<stdio.h>
int main()
{
    int n, i, a[100], Sodd=0, Seven=0;
    printf("How many numbers you want to enter?(<100)\t");
    scanf("%d", &n);
    printf("Enter the %d numbers:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]%2==0)
        {
            Seven=Seven+a[i];
        }
        else
        {
            Sodd=Sodd+a[i];
        }
    } 
    printf("The sum of odd numbers is %d\nThe sum of even numbers is %d", Sodd, Seven);
    return 0;
    
}