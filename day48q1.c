//Check if one string is a rotation of another.

# include <stdio.h>
# include <string.h>
int main()
{
  char str1[100], str2[100], temp[200];
  
  printf("Enter first string");
  scanf("%s", str1);
  
  printf("Enter second string");
  scanf("%s", str2);
  
  if(strlen(str1)!= strlen(str2))
  {
    printf("String are not roatations");
	return 0;
  }
    strcpy(temp, str1);
	strcat(temp, str1);
	
	if(strstr(temp, str2)!= NULL)
	{
	  printf("Strings are roatations");
	}
	else {
	printf("String are not roatations");
   }
    return 0;
}
C:\Users\PRACHI SINGHAL\Downloads\c programming>day48q1
Enter first string abcd
Enter second string cdab
Strings are roatations
