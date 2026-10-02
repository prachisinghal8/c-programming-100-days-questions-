//Count vowels and consonants in a string.

# include <stdio.h>
int main()
{
   int v=0,c=0,i;
   char str[100];
   
   printf("Enter a string");
   fgets(str,sizeof(str),stdin);
   
   for(i=0;str[i]!='\0'&& str[i]!='\n';i++)
   {
     if((str[i]>='A' && str[i]<='Z')|| (str[i]>='a' && str[i]<='z'))
	 {
	   if(str[i]=='a'|| str[i]=='e'|| str[i]== 'i'|| str[i]== 'o'|| str[i]== 'u'|| str[i]=='A'|| str[i]== 'E'|| str[i]== 'I'|| str[i]== 'O'|| str[i]== 'U')
	   {
	     v+=1;
	   }
	     else
		 {
		   c+=1;
		 }
	  }
	}
	
	printf("vowels =%d consonants=%d", v,c);
return 0;
}

C:\Users\PRACHI SINGHAL\Downloads\c programming>day42q1
Enter a stringprachi
vowels =2 consonants=4

