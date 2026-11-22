//Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

# include <stdio.h>
int main()
{
  int n,i,j,product;
  
  printf("Enter size of array: ");
  scanf("%d", &n);
  
  int nums[n], answer[n];
  
  printf("Enter array elements: ");
  for(i=0;i<n;i++)
  {
    scanf("%d", &nums[i]);
  }
   
    for(i=0;i<n;i++)
	{
	  product=1;
	  
	  for(j=0;j<n;j++)
	  {
	    if(i!=j)
		{
		  product=product*nums[j];
		}
	  }
	     answer[i]=product;
	 }
	   printf("answer array: ");
	   for(i=0;i<n;i++)
	   {
	     printf("%d ",answer[i]);
	   }

return 0;
}
C:\Users\PRACHI SINGHAL\Downloads\c programming>day58
Enter size of array: 5
1 2 3 4 5
answer array: 120 60 40 30 24