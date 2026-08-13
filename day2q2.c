//write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>
int main()
{
float radius,circumference,area;
printf("Enter the radius of the circle:");
scanf("%f",&radius);

area=3.14*radius*radius;
circumference=2*3.14*radius;

printf("Area of the circle=%.2f,circumference of the circle=%.2f\n",area,circumference);
printf("%2f",&radius);

return 0;
}