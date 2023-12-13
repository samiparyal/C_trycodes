#include<stdio.h>
int fact(int num);
int main()
{
    int num;
    printf("Enter a number to find its fact:\t");
    scanf("%d", &num);
    printf("The fact of %d is %d", num, fact(num));
}
int fact(int num)
{
    if(num>=1)
    {
        return num*fact(num-1);
    }
    else // when num=num(i.e. 1)-1 then should return 1 at last because 0!=1
    {
        return 1;
    }
}