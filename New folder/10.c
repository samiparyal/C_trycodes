#include<stdio.h>
int transpose(int row, int col, int a[20][20]);
int main()
{
    int m, n;
    int a[20][20];
    printf("Enter the value of 'n' for order n*n of a 2Darray:\n");
    scanf("%d", &n);
    printf("\nEnter the Value for the 2Darray:\n");
    for(int i=0; i<n; i++)
      {
        for(int j=0; j<n; j++)
        {
          printf("Enter the element a[%d][%d] of the 2Darray:\t", i,j);
          scanf("%d", &a[i][j]);
        }
      } 
    printf("The transpose of the 2Darray is:\n");
    transpose(n, n, a);
}
int transpose(int row, int col, int a[20][20])
{
 
 for(int i=0; i<row; i++)
    {
       for(int j=0; j<col; j++)
        { 
             printf("%d\t", a[j][i]);
        }     
        printf("\n");
    }
}