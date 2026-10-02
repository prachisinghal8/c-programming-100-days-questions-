# include <stdio.h>
int main()
{
   int i,j,distinct=1,n,matrix[10][10];
   
   printf("Enter size of matrix:");
   scanf("%d",&n);
   
   printf("Enter matrix elements:\n");
   
   for(i=0;i<n;i++)
   {
     for(j=0;j<n;j++)
	 {
	   scanf("%d",&matrix[i][j]);
	 }
   }
	    for(i=0;i<n;i++)
		{
		   for(j=i+1;j<n;j++)
		   {
		      if(matrix[i][i]==matrix[j][j])
			  {
			     distinct=0;
			      break;
			  }
		   }
		}
			
			if(distinct==1)
			{
			  printf("diagonal elements are distinct");
			}
			else{
			printf("Diagonal elements are not distinct");
		    }
			return 0;
			}
				 