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
   
   

   