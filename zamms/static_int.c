#include <stdio.h>
int haha();
  
int main()
{
    printf("\nfunction called %d times", haha());
    printf("\nfunction called %d times", haha());
    printf("\nfunction called %d times", haha());
    printf("\nfunction called %d times", haha());
    
}
int haha()
{
    static int x; //default initial value of static storage class is 0
    x++;
    return x;
}
