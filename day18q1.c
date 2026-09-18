//write a program to print all factors of a given number.

# include <stdio.h>
int main()
{
   int n,i;
   
   printf("Enter n:");
   scanf("%d",&n);
   
   for(i=1; i<=n; i++)
   {
      if(n%i==0)
	  {
	    printf("%d",i);
	  }
	}

return 0;
}

C:\Users\PRACHI SINGHAL\Downloads\c programming>day18q1
Enter n:7
17