//Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

# include <stdio.h>
int main()
{
  int n,i,j,k,max;
  
  printf("Enter array size: ");
  scanf("%d", &n);
  
  int arr[n];
  
  printf("Enter elements of array: ");
  for(i=0;i<n;i++)
  {
    scanf("%d", &arr[i]);
  }
  
   printf("enter value of k: ");
   scanf("%d", &k);
   
   for(i=0;i<=n-k;i++)
   {
     max=arr[i];
   
   
   for(j=i;j<i+k;j++)
   {
     if(arr[j]>max)
	 {
	   max=arr[j];
	 }
   }
   
     printf("%d ", max);
   }

return 0;
}

Enter array size: 5
Enter elements of array: 1 2 3 4 5
enter value of k: 2
2 3 4 5