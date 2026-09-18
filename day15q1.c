//Write a program to calculate the factorial of a number.
 
 
#include <stdio.h>
int main()
{
   int n,i,factorial=1;
   
   printf("Enter n:");
   scanf("%d",&n);
   
   for(i=1;i<=n;i++)
   {
   factorial=factorial*i;
   }
   
   printf("%d",factorial);
   
return 0;
}


C:\Users\PRACHI SINGHAL\Downloads\c programming>day15q1
Enter n:5
120
   