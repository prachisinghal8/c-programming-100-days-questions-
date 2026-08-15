//write a program to display and calculate the sum of first n natural numbers.

#include <stdio.h>
int main()
{
int n,i,sum=0;
scanf("%d",&n);

for(i=1;i<=n;i++)
{
  printf("%d",i);
  sum=sum+i;
}
printf("\nSum=%d",sum);
return 0;
}

C:\Users\PRACHI SINGHAL\Downloads\c programming>day4q2
8
12345678
Sum=36
