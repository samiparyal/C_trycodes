#include<stdio.h>
double euler(int num);
int fact(int n);
int main()
{
    int num;
    printf("Enter upto which term you want to continue Euler's Series:\t");
    scanf("%d", &num);
    printf("The Sum of Euler's Series upto %d is %f", num, euler(num));
}
double euler(int num)
{
    double sum=0;
    for(int i=0; i<num; i++)
    {
        sum=sum+(1.0/fact(i)); 
    }    
    return sum;
}
int fact(int n)
{
    int factorial=1;
    while(n!=0)
    {
       factorial=factorial*n;
       n--;
    }    
    return factorial;
}
