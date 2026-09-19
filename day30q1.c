//Count even and odd numbers in an array.

# include <stdio.h>
int main()
{
   int arr[5],i,even=0,odd=0;
   
   printf("Enter 5 elements:\n");
   
   for(i=0;i<5;i++)
   {
     scanf("%d",&arr[i]);
	}
	
	for(i=1;i<5;i++)
	{
	   if(arr[i]%2==0)
	   {
	     even++;
	   }
	     else{
		 odd++;}
	}
	   printf("even numbers=%d",even);
	   printf("odd numbers=%d",odd);

return 0;
}
	 