# include <stdio.h>
int main()
{
  int matrix[10][10];
  int i,j,rows,columns,sum=0;
  
  printf("Enter number of rows:");
  scanf("%d",&rows);
  
  printf("Enter number of columns:");
  scanf("%d",&columns);
  
  printf("Enter matrix elements:\n");
  
  for(i=0;i<rows;i++)
  {
    for(j=0;j<columns;j++)
	 {
	   scanf("%d",matrix[i][j]);
	   sum=sum+matrix[i][j];
	   }
	}
	  printf("sum=%d",sum);
	 
	 return 0;
}