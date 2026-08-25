//Write a program to print the product of even numbers from 1 to n.


#include <stdio.h>
int main()
{
    int n,i,sum=0;
	
	printf("enter n:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++);{
	sum+=(2*i);}
	
	printf("sum of first %d even numbers=%d\n",n,sum);
	
	return 0;
	}


C:\Users\PRACHI SINGHAL\Downloads\c programming>day14q2
enter n:52
sum of first 52 even numbers=106
