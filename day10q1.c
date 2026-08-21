//write a program to classify a triangle as equilateral,isosceles or scalene triangle based on it's side lengths.

#include <stdio.h>

int main()
{
  float a,b,c;
  
  printf("Enter three side lengths: ");
  scanf("%f %f %f", &a,&b,&c);
  
  if(a==b && b==c){
  printf("Equilateral triangle");}
  
  else if(a==b||b==c||a==c){
  printf("Isosceles triangle");}
  
  else{
  printf("Scalene triangle");}
  
  return 0;
  
 }

C:\Users\PRACHI SINGHAL\Downloads\c programming>day10q1
Enter three side lengths: 23 23 22
Isosceles triangle
  
  
