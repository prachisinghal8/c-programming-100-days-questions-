//Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

# include <stdio.h>
# include <string.h>

int main()
{
   char s[100], t[100];
   int i,j, found, flag=1;
   
   printf("Enter first string");
   scanf("%s", s);
   
   printf("enter second string");
   scanf("%s", t);
   
   if(strlen(s)!= strlen(t))
   {
     flag=0;
   }
    else{
	 for(i=0;s[i]!='\0';i++)
	 {
	    found=0;
    
	 for(j=0;t[j]!='\0';j++)
	 {
	   if(s[i]==t[j])
	   {
	     t[j]='0';
		 found=1;
		 break;
	   }
	 }
	 
	   if(found==0)
	   {
	     flag=0;
		 break;
	   }
	 }
    }
	  if(flag==1)
	  
	    printf("Anagram");
	  
	  else
	  printf("Not anagram");
	  
return 0;
}

C:\Users\PRACHI SINGHAL\Downloads\c programming>day65
Enter first string anagram
enter second string nagram
Not anagram