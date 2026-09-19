# include <stdio.h>
int main()
{
   int arr[5],i,max,min;
   
   printf("Enter 5 elements:\n");
   
   for(i=0;i<5;i++)
   {
      scanf("%d",&arr[i]);
	}
	  
	  max=arr[0];
	  min=arr[0];
	  
	for(i=1;i<5;i++)
	{
	  if(max<arr[i]);
	  {
	    max=arr[i];
	  }
	  if(min>arr[i])
	  {
		  min=arr[i];
	  }
	}
	printf("Maximum=%d\n",max);
	printf("Minimum=%d",min);

return 0;
}