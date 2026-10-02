# include <stdio.h>
int main()
{
   int n,pos,arr[100],i;
   printf("Enter number of elements:");
   scanf("%d",&n);
   
   printf("Enter elements:");
   for(i=0;i<n;i++)
   {
      scanf("%d",&arr[i]);
   }
      printf("Enter position to delete:");
	  scanf("%d",&pos);
	  
	  for(i=pos-1;i<n-1;i++)
	  {
	    arr[i]=arr[i+1];
	  }
	  
	     n--;
	    printf("Array after deletion: ");
		for(i=0;i<n;i++)
		{
		  printf("%d",arr[i]);
		}
		 return 0;
}
C:\Users\PRACHI SINGHAL\Downloads\c programming>day34q2
Enter number of elements:3
Enter elements:1 2 3
Enter position to delete:2
Array after deletion:13