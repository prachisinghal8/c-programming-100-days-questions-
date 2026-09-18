//Write a program to find the LCM of two numbers.

# include <stdio.h>
int main()
{
    int a,b,lcm,i;
	
	printf("Enter two numbers:");
	scanf("%d %d", &a, &b);
	
	for(i=1; ; i++)
	{
	  if((a*i)%b==0);
	  {
	  lcm=a*i;
	  break;
	  }
	}
	   printf("%d",lcm);

return 0;
}
	
C:\Users\PRACHI SINGHAL\Downloads\c programming>day19q1
Enter two numbers:9 18
9