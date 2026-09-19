//Reverse an array without taking extra space.

# include <stdio.h>
int main()
{
   int arr[5],i,n,temp;
   
   printf("Enter number of elements:\n");
   scanf("%d",&arr[i]);
   
   printf("Enter elements:\n");
   for(i=1;i<5;i++)
   {
      scanf("%d",arr[i]);
    }
	
	for(i=0;i<n/2;i++)
	{
	   temp=arr[i];
	   arr[i]=arr[n-i-1];
	   arr[n-i-1]=temp;
	 }
	 
	  printf("Reversed array:\n");
	  
	  for(i=0;i<5;i++)
	  {
	     printf("%d",&arr[i]);
	  }

return 0;
}
   