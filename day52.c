//Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. 
//This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

# include <stdio.h>
int main()
{
  int n,i,index = -1,x, arr[10];
  
  printf("Enter size of an array: ");
  scanf("%d", &n);
  
  printf("Enter sorted array elements: ");
  for(i=0;i<n;i++)
  {
    scanf("%d", &arr[i]);
  }
  
  printf("Enter value of x: ");
  scanf("%d", &x);
  
  for(i=0;i<n;i++)
  {
    if(arr[i]>=x)
	{
	  index=i;
	  break;
	}
  }
    printf("Ceil index: %d", index);

   return 0;
   }
  
  C:\Users\PRACHI SINGHAL\Downloads\c programming>day52
Enter size of an array: 3
Enter sorted array elements: 1 2 2
Enter value of x: 1
Ceil index: 0