//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

# include <stdio.h>
# include <string.h>

int main()
{
  char s[100];
  int i,j,k,count,repeat,max=0;
  
  printf("Enter a string");
  scanf("%s", s);
  
  int n = strlen(s);
  
  for(i=0;i<n;i++)
  {
    count=0;
	
	for(j=i;j<n;j++)
	{
	   repeat=0;
	   
	   for(k=i;k<j;k++)
	   {
	     if(s[j]==s[k])
		 {
		   repeat=1;
		   break;
		 }
	   }
	      if(repeat==1)
		  break;
	  
		  count++;
		 
		  if(count>max)
		  max=count;
	   }
  }
	    printf("Length of longest subsrting: %d", max);
return 0;
}

C:\Users\PRACHI SINGHAL\Downloads\c programming>day64
Enter a stringbbccdd
Length of longest subsrting: 2