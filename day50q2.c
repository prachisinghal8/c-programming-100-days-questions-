//Print all sub-strings of a string.

# include <stdio.h>
# include <string.h>
int main()
{
    char str[100];
	int i,j,k,n;
	
	printf("Enter a string");
	fgets(str, sizeof(str),stdin);
	
	n=strlen(str);
	
	for(i=0;i<n;i++)
	{
	   for(j=i;j<n;j++)
	   {
	      for(k=i;k<=j;k++)
		  { 
		     printf("%c", str[k]);
		  }
		    printf("\n");
	   }
	}
	 return 0;
	 }
	 C:\Users\PRACHI SINGHAL\Downloads\c programming>day50q2
Enter a stringabcd
a
ab
abc
abcd
abcd

b
bc
bcd
bcd

c
cd
cd

d
d
