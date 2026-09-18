//Write a program to find the HCF (GCD) of two numbers

# include <stdio.h>
int main()
{
   int i,a,b,hcf;
   
   printf("Enter two numbers:");
   scanf("%d %d",&a,&b);
   
   hcf=1;
   
   for(i=1; i<=a && i<=b; i++)
   {
    if (a%i==0 && b%i==0);
	{
	hcf=i;
	}
   }
      printf("%d",hcf);
	  
 
 return 0;
 }
 
 C:\Users\PRACHI SINGHAL\Downloads\c programming>day18q2
Enter two numbers:7 8
7
   