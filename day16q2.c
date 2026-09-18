//Write a program to check if a number is a palindrome.


#include <stdio.h>
int main()
{
    int n,remainder,reverse=0,original;
	
	printf("Enter n:");
	scanf("%d",&n);
	
	original=n;
	
	while(n!=0){
	remainder=n%10;
	reverse=reverse*10+remainder;
	n=n/10;}
	
	if(original==reverse){
	printf("Palindrome");
    }
	else
	{
	printf("Not palindrome");
    }

return 0;
}

C:\Users\PRACHI SINGHAL\Downloads\c programming>day16q2
Enter n:1121
Not palindrome

	
	