Write a program to print the sum of the first n odd numbers.


#include <stdio.h>
int main()
{
   int n,i, sum=0;
   
   printf("Enter the value of n:");
   scanf("%d",&n);
   
   for(i=1;i<=n;i++);{
   sum+=(2*i-1);}
   
   printf("sum of first %d odd numbers= %d\n", n,sum);
   
   return 0;
   }


C:\Users\PRACHI SINGHAL\Downloads\c programming>day14q1
Enter the value of n:67
sum of first 67 odd numbers= 135
   
