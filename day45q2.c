//Toggle case of each character in a string.

# include <stdio.h>
# include <ctype.h>
int main()
{
  char str[100];
  int i;
  
  printf("enter a string");
  fgets(str,sizeof(str),stdin);
  
  for(i=0;str[i]!= '\0';i++)
  {
    if(islower(str[i]))
      str[i]= toupper(str[i]);
    else if(isupper(str[i]))
       str[i]=tolower(str[i]);
  }
    printf("toggled string=%s", str);
return 0;
}	

C:\Users\PRACHI SINGHAL\Downloads\c programming>day45q2
enter a string Hello
toggled string= hELLO
