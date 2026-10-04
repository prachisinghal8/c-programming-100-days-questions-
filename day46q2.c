//Find the first repeating lowercase alphabet in a string.

# include <stdio.h>
int main()
{
    char str[100];
	int i,j;
	
	printf("Enter a string");
	fgets(str,sizeof(str),stdin);
	
	for(i=0;str[i]!= '\0';i++)
	{
	  if(str[i]>='a'&& str[i]<= 'z')
	  {
	     for(j=i+1;str[j]!= '\0';j++)
		 {
		    if(str[i]==str[j])
			{
		  printf("First repeating lowercase alphabet=%c", str[i]);
		  return 0;
		    }
		}
	  }
    }
	printf("No repeating lowercase alphabet");
	return 0;
	}
	C:\Users\PRACHI SINGHAL\Downloads\c programming>day46q2
Enter a stringhello
First repeating lowercase alphabet=l