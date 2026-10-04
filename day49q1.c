//Print the initials of a name.

# include <stdio.h>
int main()
{
   char name[100];
   int i;
   
   printf("Enter name");
   fgets(name, sizeof(name),stdin);
   
   printf("Initials: ");
   printf("%c", name[0]);
   
   for(i=0;name[i]!='\0';i++)
   {
     if(name[i]==' ')
	 {
	    printf("%c", name[i+1]);
	 }
   }
   return 0;
   }
		
   c:\Users\PRACHI SINGHAL\Downloads\c programming>day49q1
Enter namePrachi Singhal
Initials: PS