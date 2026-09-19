//Merge two arrays.

# include <stdio.h>
int main()
{
  int a[100],b[200],c[300];
  int n2,n1,i;
  
  printf("Enter size of first array:\n");
  scanf("%d",&n1);
  
  printf("Enter elements of first array:");
  
  for(i=0;i<n1;i++)
  {
     scanf("%d",&a[i]);
  }
  
  printf("Enter size of second array:\n");
  scanf("%d",&n2);
  
  printf("enter elements of second array:");
  
  for(i=0;i<n2;i++)
  {
     scanf("%d",&b[i]);
  }
  
  for(i=0;i<n1;i++)
  {
     c[i]=a[i];
  }
    for(i=0;i<n2;i++)
	{
	   c[n1+i]=b[i];
     }
	    printf("Merged array:");
		for(i=0;i<n1+n2;i++)
		{
		printf("%d",c[i]);
		}
return 0;
}

Enter size of first array:
5
Enter elements of first array:1 2 3 4 5
Enter size of second array:
6
enter elements of second array:1 2 3 4 5 6
Merged array:12345123456
		
	 