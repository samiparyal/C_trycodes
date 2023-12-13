#include<stdio.h>
int read(int C[20][20], int row, int col);
int compute(int A[20][20], int B[20][20], int row, int col);
int main()
{
   int A[20][20], B[20][20], row, col, sum[20][20]; 
   printf("Enter the order of the matrix A and B; m*n (<20):\n");
   scanf("%d", &row); printf("*\n"); scanf("%d", &col);
   read(A, row, col);
   read(B, row, col);
   compute(A,B,row,col);
   printf("The sum from the 2-D arrays from the expression=\n");
   for(int i=0; i<row; i++)
   {
    for(int j=0; j<row; j++)
    {
        printf("%d\t", sum[i][j]);
    }
    printf("\n");
   }
}
int read(int C[20][20], int row, int col)
{
    printf("\nEnter the Value for the matrix:\n");
    for(int i=0; i<row; i++)
      {
        for(int j=0; j<col; j++)
        {
          printf("Enter the element a[%d][%d] of the matrix:\t", i,j);
          scanf("%d", &C[i][j]);
        }
      } 
    return C[20][20];
}
int compute(int A[20][20], int B[20][20], int row, int col)
{
    int sum[20][20];
    for(int i=0; i<row ;i++)
    {
        for(int j=0; j<col; j++)
        {
         sum[20][20]= (5*A[i][j])+(2*B[i][j]);
        }
    }
    return sum[20][20];
}