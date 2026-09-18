//Write a program to find the sum of digits of a number.

# include <stdio.h>
int main()
{
    int n,digit,sum=0;
	
	printf("Enter n:");
	scanf("%d",&n);
	
	while(n>0)
	{
	
	    digit=n%10;
		sum=sum+digit;
		n=n/10;
		
    }
	
	printf("%d", sum);
	
return 0;
}

C:\Users\PRACHI SINGHAL\Downloads\c programming>day19q2
Enter n:456
15