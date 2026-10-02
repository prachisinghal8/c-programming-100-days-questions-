# include <stdio.h>
int main()
{
  int rows,columns,i,j,matrix[10][10],sum[10];
  
  printf("enter number of rows:");
  scanf("%d",&rows);
  
  printf("enter number of columns:");
  scanf("%d",&columns);
  
  printf("Enter matrix elements:\n");
  
  for(i=0;i<rows;i++)
  {
    for(j=0;j<columns;j++)
	{
	  scanf("%d",&matrix[i][j]);
	}
  }
     for(i=0;i<rows;i++)
	   {
	     sum[i]=0;
         
		 for(j=0;j<columns;j++)
		 {
		   sum[i]=sum[i]+matrix[i][j];
		 }
	}
	    printf("Sum of each row:\n");
		
		for(i=0;i<rows;i++)
		{
		  printf("%d ",sum[i]);
		}
		
		return 0;
		}
  