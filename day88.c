//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>

enum role
{
    ADMIN = 1, USER, GUEST
};

int main()
{
    int choice;

    printf("1. ADMIN\n");
    printf("2. USER\n");
    printf("3. GUEST\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case ADMIN:
            printf("Welcome Admin! You have full access.");
            break;

        case USER:
            printf("Welcome User! You have limited access.");
            break;

        case GUEST:
            printf("Welcome Guest! You have read-only access.");
            break;

        default:
            printf("Invalid choice.");
    }

    return 0;
}

C:\Users\PRACHI SINGHAL\Downloads\c programming>day87

1. ADMIN
2. USER
3. GUEST
Enter your choice: 1
Welcome Admin! You have full access.
