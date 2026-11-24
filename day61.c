//Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

# include <stdio.h>
int main()
{
  int n,i,j,k,found;
  
  printf("enter size of an array: ");
  scanf("%d", &n);
  
  int arr[n];
  printf("enter array elements: ");
  for(i=0;i<n;i++)
  {
    scanf("%d", &arr[i]);
  }
    
	printf("enter value of k: ");
	scanf("%d", &k);
	
	for(i=0;i<=n-k;i++)
	{
	  found=0;
	  for(j=i;j<i+k;j++)
	  {
	    if(arr[j]<0)
		{
		  printf("%d", arr[j]);
		  found=1;
		  break;
		}
	  }
	  
	  if(found==0)
	  {
	   printf("0 ");
	  }
	  
	}
	
return 0;
}
  C:\Users\PRACHI SINGHAL\Downloads\c programming>day61
enter size of an array: 4
enter array elements: 1 2 3 4
enter value of k: 3
0 0