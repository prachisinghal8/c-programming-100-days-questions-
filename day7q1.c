//Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include<stdio.h>
int main()
{
  int year;
  
  printf("Enter a year:");
  scanf("%d",&year);
  
  if(year%400==0)
  {
   printf("Leap year");
  }
  else if(year%100==0)
  {
   printf("Not a leap year");
  }
  else if(year%4==0)
  {
   printf("Leap year");
  }
  else
  { 
   printf("Not a leap year");
  }
return 0;
}

C:\Users\PRACHI SINGHAL\Downloads\c programming>day7q1
Enter a year:1947
Not a leap year
