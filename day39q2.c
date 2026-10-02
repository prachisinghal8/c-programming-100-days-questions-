# include <stdio.h>
int main()
{
  int i,j,matrix[10][10],sum=0,n;
  
  printf("Enter size of matrix");
  scanf("%d",&n);
  
  printf("Enter elements of matrix:\n");
  
  for(i=0;i<n;i++)
  {
     for(j=0;j<n;j++)
	 {
	   scanf("%d",&matrix[i][i]);
	 }
  }
	   for(i=0;i<n;i++)
	   {
	      sum+=matrix[i][i];
	   }
	   
	   printf("Sum of main diagonal elements=%d",sum);
	   return 0;
	   }