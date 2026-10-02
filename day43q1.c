//Reverse a string.

# include <stdio.h>
int main()
{
  int i=0,len=0;
  char str[100],temp;
  printf("Enter a string");
  fgets(str,sizeof(str),stdin);
  
  for(i=0;str[i]!= '\0' && str[i]!= '\n';i++)
  {
    len++;
  }
    for(i=0;i<len/2;i++)
	{
	  temp=str[i];
	  str[i]=str[len-1-i];
	  str[len-1-i]=temp;
	 }
	 
	 printf("Reversed string: %s", str);
	 return 0;
	 }
	 
	 
C:\Users\PRACHI SINGHAL\Downloads\c programming>day43q1
Enter a string hello
Reversed string: olleh