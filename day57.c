//Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. 
//If there does not exist next greater of current element, then previous greater element for current element is -1.

# include <stdio.h>
int main()
{
  int i,j,n,found;
  
  printf("Enter array size:");
  scanf("%d", &n);
  
  int arr[n];
  
  for(i=0;i<n;i++)
  {
   scanf("%d", &arr[i]);
  }
    for(i=0;i<n;i++)
	{
	  found=0;
	  
	   for(j=i-1;j>=0;j--)
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

C:\Users\PRACHI SINGHAL\Downloads\c programming>day57
Enter array size:5
1 2 3 4 5
-1 -1 -1 -1 -1