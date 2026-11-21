//write a cprogram to take a sorted array and an integer say target as inputs. the elements in the sorted array might be repeated. You need to print the first and last occurence of the target and print the index of first anf last occurence.
//print-1 -1 if the target is not present.

# include <stdio.h>
int main()
{
    int first=-1, last=-1, n, i, target, nums[100];
	
	printf("Enter array size: ");
	scanf("%d", &n);
	
	printf("Enter sorted array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&nums[i]);
	}
	printf("Enter target: ");
	scanf("%d", &target);
	
	 for(i=0;i<n;i++)
	 {
		 if(nums[i]==target)
		 {
			 if(first==-1)
				 first=i;
			 
			 last=i;
		 }
	 }
	   printf("%d %d", first,last);
return 0;
}

Enter array size: 7
Enter sorted array elements: 1 2 3 4 5 5 6
Enter target: 5
4 5