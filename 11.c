#include<stdio.h>
int arrayInput(int a[25]);
int check(int a[25]);
int main()
{
    int a[25];
    printf("Input the 25 numbers in the array:\n");
    arrayInput(a); 
}
int arrayInput(int a[25])
{
    for(int i=0; i<25; i++)
    {
        scanf("\n%d", &a[i]);
    } 
    check(a);
}
int check(int a[25])
{
    int OddCount=0, EvenCount=0; 
    for(int i=0; i<25; i++)
    {
        if(a[i]%2==0)
        {
            EvenCount++;
        }
        else 
        {
            OddCount++;
        }
    } 
    printf("The total number of Odd numbers are %d\n The total number of Even numbers are %d", OddCount, EvenCount);
}