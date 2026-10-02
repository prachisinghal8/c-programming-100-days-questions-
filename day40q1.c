# include <stdio.h>
int main()
{
   int i,j,rows,columns,d,matrix[10][10];
   
   printf("Enter number of rows:");
   scanf("%d", &rows);
   
   printf("Enter number of columns:");
   scanf("%d", &columns);
   
   printf("Enter matrix elements:\n");
   
   for(i=0;i<rows;i++)
   {
     for(j=0;j<columns;j++)
	 {
	   scanf("%d",&matrix[i][j]);
	  }
	}
	  printf("diagonal transversal:\n");
	  
	  for(d=0;d<rows+columns-1;d++)
	  {
	     for(i=0;i<rows;i++)
		 {
		 j=d-i;
		 
		 if(j>=0&&j<columns)
		 {
		   printf("%d ", matrix[i][j]);
		 }
	   }
	  }
	  return 0;
	  }
		 