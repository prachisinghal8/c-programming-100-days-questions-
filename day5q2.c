#include <stdio.h>
int main()
{

int sec,minutes,hours,seconds;
printf("Enter time in seconds:");
scanf("%d",&sec);

  hours=sec/3600;
  minutes=(sec%3600)/60;
  seconds=sec%60;
  
  printf("%.2d,%.2d,%.2d",hours,minutes,seconds);
  return 0;
}