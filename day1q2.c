//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>
int main()
{
   float a,b;
   float sum,sub,mul;
   float div;
   printf("Hello!Enter two numbers:");
   scanf("%f%f",&a,&b);
   printf("a=%.2f b=%.2f\n",a,b);
   sum=a+b;
   sub=a-b;
   mul=a*b;
   div=a/b;
   printf("sum=%f,sub=%f,mul=%f,div=%f",sum,sub,mul,div);
   return 0;
}

C:\Users\PRACHI SINGHAL\Downloads\c programming>day1q2
Hello!Enter two numbers:67 76
a=67.00 b=76.00
sum=143.000000,sub=-9.000000,mul=5092.000000,div=0.881579
C:\Users\PRACHI SINGHAL\Downloads\c programming>

   
