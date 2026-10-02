//Remove all vowels from a string.

# include <stdio.h>
int main()
{
  char str[100];
  int i,j=0;
  
  printf("Enter a string");
  fgets(str, sizeof(str),stdin);
  
  for(i=0;str[i]!= '\0';i++)
  {
    if(str[i]!='a'&& str[i]!='e'&& str[i]!= 'i'&& str[i]!= 'o'&& str[i]!= 'u'&& str[i]!='A'&& str[i]!='E'&&str[i]!='I'&&str[i]!='O'&&str[i]!='U')
	{
	  str[j]=str[i];
	  j++;
	 }
  }
	 str[j]='\0';
  
	 printf("String after removing vowels = %s", str);
	 return 0;
	 }
	 
	 C:\Users\PRACHI SINGHAL\Downloads\c programming>day46q1
Enter a stringhello
String after removing vowels = hll