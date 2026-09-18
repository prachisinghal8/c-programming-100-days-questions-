//Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>
int main()
{
    int n,binary=0,place=1,remainder;
	
	printf("Enter n:");
	scanf("%d",&n);
	
	while(n!=0)
	{
	remainder=n%2;
	binary=binary+remainder*place;
	place=place*10;
	n=n/2;
	}
	
	printf("%d",binary);
	
return 0;
}
	
C:\Users\PRACHI SINGHAL\Downloads\c programming>day16q1
Enter n:7
111