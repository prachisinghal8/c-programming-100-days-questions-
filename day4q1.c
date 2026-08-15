//write a program to swap two numbers without using a third variable.

#include<stdio.h>
int main()
{

int a,b;
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;

printf("after swap:%d%d",a,b);
return 0;
}


C:\Users\PRACHI SINGHAL\Downloads\c programming>day4q1
6 7
after swap:76
C:\Users\PRACHI SINGHAL\Downloads\c programming>
