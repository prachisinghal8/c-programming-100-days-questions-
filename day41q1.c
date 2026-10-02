//ount characters in a string without using built-in length functions.

# include <stdio.h>
int main()
{
   int i=0,count=0;
   char str[100];
   
   printf("Enter a string: ");
   fgets(str,100,stdin);
   
   while(str[i]!='\0')
   {
      if(str[i]!='\n');
	  {
	    count++;
	  }
	    i++;
    }
	  printf("Number of character=%d", count);
return 0;
}

:\Users\PRACHI SINGHAL\Downloads\c programming>day41q1
Enter a string: hello
Number of character=6