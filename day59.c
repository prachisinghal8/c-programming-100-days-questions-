# include <stdio.h>
int main()
{
  int n,i,j,k,sum,max;
  
  printf("Enter size of an array: ");
  scanf("%d", &n);
  
  int arr[n];
  
  printf("Enter array elements: ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
    
    printf("Enter value of k: ");
	scanf("%d", &k);
	
    max=0;
	
	for(i=0;i<n-k;i++)
	{
	  sum=0;
	  
	  for(j=i;j<i+k;j++)
	  {
	    sum=sum+arr[j];
	  }
	  
	  if(sum>max)
	  { 
	    max=sum;
	  }
	 }
	  printf("maximum sum= %d", max);

return 0;
}