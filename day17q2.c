//write a program to check if a number is prime or not.

# include <stdio.h>
int main()
{
int n,i,factor=0;

    printf("Enter n:");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
	  if(n%i==0)
	  {
	  factor=factor+1;
	  }
	}
	if(factor==2){
	printf("Prime number");
	}
	else{
	printf("Not a prime number");
	}

return 0;
}

C:\Users\PRACHI SINGHAL\Downloads\c programming>day17q2
Enter n:2
Prime number