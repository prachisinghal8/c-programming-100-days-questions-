# include <stdio.h>
//check if a string is a palindrome.

# include <stdio.h>
int main()
{
   char str[100], temp;
   int len=0,i=0,flag=1;
   
   printf("Enter a string");
   fgets(str,sizeof(str),stdin);
   
   for(i=0;str[i]!= '\0'&& str[i]!= '\n';i++)
   {
     len++;
   }
   
   for(i=0;i<len/2;i++)
   {
     if(str[i]!=str[len-i-1])
	 {
	 flag=0;
	 }
   }
     if(flag==1)
	 {
	   printf("pallindrome");
	 }
	 else
	 {
	   printf("Not pallindrome");
	 }
	 return 0;
	 }
	 
	 C:\Users\PRACHI SINGHAL\Downloads\c programming>day43q2
Enter a string hello
Not pallindrome
	 