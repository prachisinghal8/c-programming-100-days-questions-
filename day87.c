//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include <stdio.h>

enum operation
{
    ADD = 1, SUBTRACT, MULTIPLY
};

int main()
{
    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case ADD:
            printf("Result = %d", a + b);
            break;

        case SUBTRACT:
            printf("Result = %d", a - b);
            break;

        case MULTIPLY:
            printf("Result = %d", a * b);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}

C:\Users\PRACHI SINGHAL\Downloads\c programming>day86

Enter two numbers: 10 5
1. ADD
2. SUBTRACT
3. MULTIPLY
Enter your choice: 1
Result = 15