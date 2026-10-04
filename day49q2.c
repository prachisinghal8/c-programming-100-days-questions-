//Print initials of a name with the surname displayed in full.

# include <stdio.h>
# include <string.h>
int main()
{
   char name[100];
   int i, lastspace;
   
   printf("Enter name");
   fgets(name,sizeof(name),stdin);
   
   lastspace=strlen(name)-1;
   while(name[lastspace]!= ' ')
   {
	    lastspace--;
   }
   
   printf("%c. ", name[0]);
   for(i=1;i<lastspace;i++)
   
   {
      if(name[i]== ' ')
	  {
	    printf("%c. ", name[i+1]);
	  }
   }
     printf("%s", &name[lastspace+1]);
	return 0;
}
C:\Users\PRACHI SINGHAL\Downloads\c programming>day49q2
Enter nameHey Prachi Singhal
H. P. Singhal