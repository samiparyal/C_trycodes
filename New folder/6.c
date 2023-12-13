#include<stdio.h>
int main()
{
    int m, n, p, q, f, mul[20][20];
    int a[20][20], b[20][20];
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
    printf("\n\nEnter the order of matrix2 p*q:\n");
    scanf("%d", &p); printf("*\n"); scanf("%d", &q);  
    printf("\nEnter the Value for matrix B:\n");
    for(int i=0; i<p; i++)
      {
        for(int j=0; j<q; j++)
        {
          printf("Enter the element [%d][%d] of matrixB:\t", i,j);
          scanf("%d", &b[i][j]);
        }
      }  

   if(n==p)
     {
      for(int i=0; i<m; i++)
      {
         for(int j=0; j<q; j++)
         {
            mul[i][j]=0;
            for(int k=0; k<p; k++)
            {
                mul[i][j]+=(a[i][k]*b[k][j]);
            }    
         }
      }
      printf("The product of MatrixA and MatrixB is\n");
      for(int i=0; i<m; i++)
      {
        for(int j=0; j<q; j++)
        {
            printf("\t%d",mul[i][j]);
        }
        printf("\n");
      }
     } 
    else
    {
        printf("\nThe matix cannot be multiplied!");
    }
    return 0;
}   