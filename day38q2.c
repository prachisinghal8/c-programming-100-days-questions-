# include <stdio.h>
int main()
{
  int i,j,rows,columns,a[10][10],b[10][10],sum[10][10];
  
  printf("Enter number of rows:");
  scanf("%d",&rows);
  
  printf("Enter number of columns:");
  scanf("%d",&columns);
  
  printf("Enter elements of first matrix:\n");
  
  for(i=0;i<rows;i++)
  {
    for(j=0;j<columns;j++)
	{
	  scanf("%d",&a[i][j]);
	}
  }
	
	printf("Enter elements of second matrix:\n");
	
	for(i=0;i<rows;i++)
	{
	  for(j=0;j<columns;j++)
	  {
	    scanf("%d",&b[i][j]);
	  }
	}
	  for(i=0;i<rows;i++)
	  {
	    for(j=0;j<columns;j++)
		{
		  sum[i][j]=a[i][j]+b[i][j];
		}
	  }
	    printf("sum of two matrices:\n");
		
		for(i=0;i<rows;i++)
		{
		  for(j=0;j<columns;j++)
		  {
		     printf("%d",sum[i][j]);
		  }
		     printf("\n");
	    }
		return 0;
		}
		
		C:\Users\PRACHI SINGHAL\Downloads\c programming>day38q2
Enter number of rows:2
Enter number of columns:2
Enter elements of first matrix:
1 2
3 4
Enter elements of second matrix:
4 5
6 7
sum of two matrices:
57
911
	