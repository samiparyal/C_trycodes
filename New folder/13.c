#include <stdio.h>

int arraySearch(int arr[],int size,int n);
int main()
{
	int arr[5]={1,25,15,23,39};;
	int n;

	printf("Enter a number you want to search : ");
	scanf("%d",&n);
    
	if(arraySearch(arr,5,n))
	  printf("Number is present in the Array \n");
    else
      printf("Number is NOT present in the Array \n");
	
	return 0;
}
int arraySearch(int arr[],int size,int n)
{ 
  int i;
  for(i=0;i<size;i++)
  {
    if(n==arr[i])
    {
	  return 1; 
	}
  }
  return 0;
}