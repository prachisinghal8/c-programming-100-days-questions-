//Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. 
//Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

# include <stdio.h>
int main()
{
   int n,i,arr[100], maxsum, currentsum;
   
   printf("Enter size of an array: ");
   scanf("%d", &n);
   
   printf("Enter array elements: ");
   for(i=0;i<n;i++)
   {
   scanf("%d", &arr[i]);
   }
   
   maxsum= arr[0];
   currentsum= arr[0];
   
   for(i=1; i<n;i++)
   {
    if(currentsum+arr[i]>arr[i])
	{
	  currentsum= currentsum + arr[i];
	}
	else{
	currentsum= arr[i];
    }
	
	if(currentsum>maxsum)
	{
	  maxsum= currentsum;
	}
  }
     printf("Maximum subarray sum: %d", maxsum);

return 0;
}
   
 Enter size of an array: 5
Enter array elements: -1 -2 -3 -4 -5
Maximum subarray sum: -1