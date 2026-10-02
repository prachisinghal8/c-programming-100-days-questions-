//Count frequency of a given character in a string.

# include <stdio.h>
int main()
{
char str[100],ch;
int count=0,i;

printf("Enter a string");
fgets(str,sizeof(str),stdin);

printf("Enter a character: ");
scanf("%c", &ch);

for(i=0;str[i]!= '\0';i++)
{
  if(str[i] == ch)
  {
    count++;
  }
}
   printf("frequency=%d", count);
  return 0;
  }
  
  C:\Users\PRACHI SINGHAL\Downloads\c programming>day45q1
Enter a string hello
Enter a character: l
frequency=2
  