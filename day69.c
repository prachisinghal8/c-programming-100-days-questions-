//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    int seen[1000] = {0};

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(seen[arr[i]] == 1)
        {
            printf("%d", arr[i]);
            break;
        }
        else
        {
            seen[arr[i]] = 1;
        }
    }

    return 0;
}

C:\Users\PRACHI SINGHAL\Downloads\c programming>day69
Enter size of array: 3
Enter array elements: 1 2 2
2
