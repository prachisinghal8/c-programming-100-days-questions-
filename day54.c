//Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. 
//Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

# include <stdio.h>
int main()
{
   int n,i,j,x,leftsum,rightsum;
   
   printf("Enter a positive integer: ");
   scanf("%d", &n);
   
   for(x=1;x<=n;x++)
   {
     leftsum=0;
	 rightsum=0;
	 
     for(i=1;i<=x;i++)
	 {
	    leftsum=leftsum+i;
     }
	 for(j=x;j<=n;j++)
	 {
	    rightsum=rightsum+j;
     }
       if(leftsum==rightsum)
	   {
	     printf("Pivot index: %d", x);
		 return 0;
	   }
	}
	   printf("Pivot integer: -1");
	   
	   return 0;
}

C:\Users\PRACHI SINGHAL\Downloads\c programming>day54
Enter a positive integer: 5
Pivot integer: -1