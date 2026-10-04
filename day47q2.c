//Find the longest word in a sentence.

# include <stdio.h>
# include <string.h>
int main()
{
   char str[100],word[100],longest[100];
   int i,j=0,max=0;
   
   printf("Enter a sentence");
   fgets(str,sizeof(str),stdin);
   
   for(i=0;str[i]!= '\0';i++)
   {
     if(str[i]!= ' ' && str[i]!= '\n')
	 {
	   word[j]=str[i];
	   j++;
	 }
	 else{
	  word[j]='\0';
	  
	  if(strlen(word)>max)
	  {
	    max=strlen(word);
	    strcpy(longest,word);
	 }
	   j=0;
	}
  }
     printf("longest word=%s", longest);
	 return 0;
	 }
	 C:\Users\PRACHI SINGHAL\Downloads\c programming>day47q2
Enter a sentencei love c programming
longest word=programming