//Write a program to check if a number is an Armstrong number.


#include <stdio.h>
int main()
{
    
	int n,original,digit,sum=0;
	
	printf("Enter a number:");
	scanf("%d",&n);
	
	original=n;
	while(n>0)
	{
	digit=n%10;
	sum=sum+digit*digit*digit;
	n=n/10;
	}
	
	if(original==sum)
	printf("Amstrong number");
	
	else
	printf("Not an amstrong number");
	
return 0;
}

C:\Users\PRACHI SINGHAL\Downloads\c programming>day17q1
Enter a number:56
Not an amstrong number
	