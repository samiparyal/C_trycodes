#include<stdio.h>
int main()
{
    int m, n;
    int a[20][20];
    printf("Enter the order of matrix1 m*n:\n");
    scanf("%d", &m); printf("*\n"); scanf("%d", &n);
    printf("\nEnter the Value for matrix A:\n");
    for(int i=0; i<m; i++)
      {
        for(int j=0; j<n; j++)
        {
          printf("Enter the element a[%d][%d] of matrixA:\t", i,j);
          scanf("%d", &a[i][j]);
        }
      } 
    printf("The transpose of MatrixA is:\n");
    for(int i=0; i<m; i++)
    {
       for(int j=0; j<n; j++)
        { 
             printf("%d\t", a[j][i]);
        }     
        printf("\n");
    }
    return 0;
}