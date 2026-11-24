//Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

#include <stdio.h>

int main()
{
    int m, n, i, j, temp;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    int a[m];

    printf("Enter first array elements: ");
    for(i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);

    int b[n];

    printf("Enter second array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    int c[m+n];

    for(i = 0; i < m; i++)
    {
        c[i] = a[i];
    }

    for(i = 0; i < n; i++)
    {
        c[m+i] = b[i];
    }

    for(i = 0; i < m+n; i++)
    {
        for(j = i+1; j < m+n; j++)
        {
            if(c[i] > c[j])
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    printf("Merged sorted array: ");
    for(i = 0; i < m+n; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}

C:\Users\PRACHI SINGHAL\Downloads\c programming>day67
Enter size of first array: 3
Enter first array elements: 1 2 3
Enter size of second array: 3
Enter second array elements: 2 3 4
Merged sorted array: 1 2 2 3 3 4
