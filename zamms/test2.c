
#include <stdio.h>
int sum(int num);
int main() {
    int iteration, n;
    printf("Enter a 5-digit number\t");
    scanf("%d", &n);
    while(n!=0)
      {
        n=n/10;
        iteration++;
      }
    if(iteration == 5)
      {
        printf("The sum= %d", sum(n));
      }
    else 
      {
        printf("Not a 5-digit number!");
      }
}
int sum(int num)
{
    int summ=0;
    for(int i=0; i<5; i++)
    {
        summ+=(num%10);
    }
    return summ;
}