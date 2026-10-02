# include <stdio.h>
int main()
{
   int matrix[10][10],i,j,rows,columns;
   
   printf("Enter number of rows:");
   scanf("%d",&rows);
   
   printf("Enter number of columns:");
   scanf("%d",&columns);
   
   printf("Enter matrix elements:\n");
   
   for(i=0;i<rows;i++)
   {
     for(j=0;j<columns;j++)
	 {
	   scantf("%d",matrix[i][j]);
	 }
	   printf("Transpose of matrix:\n");
	   
	   for(i=0;i<columns;i++)
	   {
	     for(j=0;j<rows;j++)
		 {
		   printf("%d",matrix[j][i]);
		 }
		   printf("\n");
}
  return 0;
  }
   