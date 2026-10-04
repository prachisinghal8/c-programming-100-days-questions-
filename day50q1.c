//Change the date format from dd/04/yyyy to dd-Apr-yyyy.

# include <stdio.h>
int main()
{
   int dd,yyyy;
   
   printf("Enter date (dd/04/yyyy): ");
   scanf("%d/04/%d", &dd,&yyyy);
   
   printf("%d-04-%d", dd,yyyy);
   
   return 0;
   }
   Enter date (dd/04/yyyy): 11/04/1111
11-04-1111