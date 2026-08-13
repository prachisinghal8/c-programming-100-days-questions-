//write a command to convert temperature from celsius to fahrenheit.

#include<stdio.h>
int main()
{
  float celsius,fahrenheit;
  
  printf("Enter temperature in celsius");
  scanf("%f",&celsius);
  
  fahrenheit=(celsius*9/5)+32;
  
  printf("Temperature in fahrenheit=%.2f\n",fahrenheit);
  
  return 0;
  
}

C:\Users\PRACHI SINGHAL\Downloads\c programming>day3q1
Enter temperature in celsius37
Temperature in fahrenheit=98.60
