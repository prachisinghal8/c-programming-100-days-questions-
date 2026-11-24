//Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

# include <stdio.h>
int main()
{
  int n,k,i,j,temp;
  
  printf("Enter size of an array: ");
  scanf("%d", &n);
  
  int arr[n];
  
  printf("Enter array elements: ");
  for(i=0;i<n;i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("Enter value of k: ");
  scanf("%d", &k);
  
  for(i=0;i<n;i++)
  {
   for(j=i+1;j<n;j++)
   {
     if(arr[i]>arr[j])
	 {
	   temp=arr[i];
	   arr[i]=arr[j];
	   arr[j]=temp;
	 }
   }
  }
  
    printf("Kth smallest elements is: %d", arr[k-1]);
return 0;
}

C:\Users\PRACHI SINGHAL\Downloads\c programming>day63
Enter size of an array: 3
Enter array elements: 1 2 3
Enter value of k: 2
Kth smallest elements is: 2