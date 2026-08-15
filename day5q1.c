//write a program to calculate simple and compound interest for given principle,rate and time.

#include <stdio.h>
#include <math.h>

int main()
{
float p,r,t,si,ci;
scanf("%f%f%f",&p,&r,&t);

  si=p*r*t/100;
  ci=p*pow((1+r/100),t)-p;
  
  printf("Simple interest=%.2f,compound interest=%.2f",si,ci);
  return 0;
}

C:\Users\PRACHI SINGHAL\Downloads\c programming>day5q1
2000 5 2
Simple interest=200.00,compound interest=205.00
