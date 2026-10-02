# include <stdio.h>
int main()
{
   int matrix1[10][10],matrix2[10][10],result[10][10],i,j,k,r1,r2,c1,c2;
   
   printf("Enter rows and columns of first matrix: ");
   scanf("%d %d", &r1,&c1);
   
   printf("Enter first matrix elements: \n");
   for(i=0;i<r1;i++)
   {
     for(j=0;j<c1;j++)
	 {
	    scanf("%d", matrix1[i][j]);
     }
   }
	  
	printf("Enter rows and columns of second matrix: ");
	scanf("%d %d", &r2,&c2);
	
	printf("Enter second marix elements:\n ");
	for(i=0;i<r2;i++)
	{
	   for(j=0;j<c2;j++)
	   {
         scanf("%d", matrix2[i][j]);
	   }
}
     
     if(c1 !=r2)
     {
        printf("Matrix multiplication is not possible:");
     }
        else{
       for(i=0;i<r1;i++)
{
  for(j=0;j<c2;j++)
{
     result[i][j]=0;
    
      for(k=0;k<c1;k++)
{
    result[i][j]+= matrix1[i][k]*matrix2[k][j];
    }
 }
 }

printf("resultant matrix:\n ");

for(i=0;i<r1;i++)
{
   for(j=0;j<c2;j++)
{
   printf("%d", result[i][j]);
}
   printf("\n");
}
		}
return 0;
}   