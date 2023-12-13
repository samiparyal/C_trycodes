#include<stdio.h>
int main()
{
    int n, temp, sum=0, store;
    printf("\nEnter a number:\t");
    scanf("%d",&n);
    store=n;
    while(n!=0)
    {
        temp=n%10;
        sum=sum+(temp*temp*temp);
        n=n/10;
    }
    (store==sum)?printf("Armstrong number!"):printf("Not an Armstrong Number!");
    return 0;
}    