//Convert a lowercase string to uppercase without using built-in functions.

# include <stdio.h>
int main()
{
   int i;
   char str[100];
   
   printf("Enter a string");
   fgets(str,sizeof(str),stdin);
   
   for(i=0;str[i]!= '\0'&& str[i]!= '\n';i++)
   {
     if(str[i]>='a' && str[i]<='z')
	 {
	   str[i]= str[i]-32;
	 }
    }
	 
	 printf("uppercase string: %s", str);
	 return 0;
	 }
	C:\Users\PRACHI SINGHAL\Downloads\c programming>day42q2
Enter a stringprachi
uppercase string: PRACHI
	
	 