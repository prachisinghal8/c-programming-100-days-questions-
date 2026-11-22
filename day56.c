//Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. 
//If there does not exist next greater of current element, then next greater element for current element is -1.


# include <stdio.h>
int main()
{
  int n,i,j,found;
  
  printf("Enter size of array: ");
  scanf("%d", &n);
  
  int arr[n];
  
  printf("enter array elements: ");
  for(i=0;i<n;i++)
  {
    scanf("%d", &arr[i]);
  }
  
   for(i=0;i<n;i++)
   {
     found=0;
     
	 for(j=i+1;j<n;j++)
	 {
	   if(arr[j]>arr[i])
	   {
	     printf("%d", arr[j]);
		 found=1;
		 break;
	   }
	 }
	  if(found==0)
	  {
	  printf("-1 ");
	  }
   }
	  
return 0;
}
	  
Enter size of array: 6
enter array elements: 1 2 3 4 5 6
23456-1
		   