# include <stdio.h>
int main()
{
  char str[100],str[200];
  int count[256]={0};
  int i;
  
  printf("Enter first string:");
  fgets(str1,sizeof(str1),stdin);
  
  printf("Enter second string:");
  fgets(str2,sizeof(str2),stdin);
  
  if(strlen(str1) != strlen(str2))
  {
    printf("Not anagrams");
	return 0;
  }
    for(i=0;str1[i] != '\0';i++)
	{
	  if(stri[i]!= '\n')
	  {
	    count[str1[i]]++;
	  }
	   if(str[i]!= '\n')
	   {
	    count[str2[i]]--;
	   }
	 }
	   for(i=0;i<256;i++)
	   {
	     if(count[i] !=0)
		 { 
		   printf("Not anagrams");
		    return 0;
	     }
	   }
	     printf("Not anagrams");
		  return 0;
}
		