//Write a program to input a character and check whether it is a vowel or consonant using if–else.


#include <stdio.h>
int main()
{
  char ch;
  
  printf("Enter a character:");
  scanf("%c",&ch);
   
  if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
  {
   printf("vowel");}
   else
  {
  printf("consonant");}
  
  return 0;
 }

C:\Users\PRACHI SINGHAL\Downloads\c programming>day7q2
Enter a character:p
consonant
  
  
