#include<stdio.h>
int main()
{
    int n, temp, rev=0, store;
    printf("\nEnter a number:\t");
    scanf("%d",&n);
    store=n;
    while(n!=0) // n=122  , 2, rev=2, 12, 2, 22, 1, 0, 1, 221
    {
        temp=n%10;
        rev=rev*10+temp;
        n=n/10;
    }
    (store==rev)?printf("Palindrome!"):printf("Not Palindrome!");
    return 0;
}    