//This program implements the bitwise operator
#include <stdio.h>
int main()
{
    int sum=0;
    double average;
    int number=1;
    while(number<=100)
    {
        sum= sum+number;
        ++number;
    }
    average= sum/100; //output is not what we are expecting
    /*
    Solutions to get the expected output 
    average = (double)sum/100;
    average = sum/(double)100;
    average = sum/100.0;
    */
    printf("Average= %lf", average);
    return 0;
        
}
