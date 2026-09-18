//Write a program to reverse a given number.


#include <stdio.h>
int main()
{
   int n, reverse=0, remainder;
   
   printf("Enter n:");
   scanf("%d",&n);
   
   while( n!=0)
   {
     remainder=n%10;
	 reverse= (reverse*10+remainder);
	 n=n/10;
	}
	
	printf("%d", reverse);

return 0;
}


C:\Users\PRACHI SINGHAL\Downloads\c programming>day15q2
Enter n:67
76-