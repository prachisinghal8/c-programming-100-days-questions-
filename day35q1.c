# include <stdio.h>
int main()
{
   int n,i,arr[100],second,largest;
   
   printf("Enter number of elements:");
   scanf("%d",&n);
   
   printf("Enter elements:");
   for(i=0;i<n;i++)
   {
     scanf("%d",&arr[i]);
   }
     largest=arr[0];
	 second=arr[0];
	 
	 for(i=0;i<n;i++)
	 {
	   if(arr[i]>largest)
	   {
	     second=largest;
		 largest=arr[i];
	   }
	    else if(arr[i]>second&& arr[i]!=largest)
		{
		   second=arr[i];
		}
     }
	   printf("Second largest element=%d",second);
	  return 0;
}
C:\Users\PRACHI SINGHAL\Downloads\c programming>day35q1
Enter number of elements:5
Enter elements:1 2 3 4 5
Second largest element=4
	   
	 