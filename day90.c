//Define a struct with enum Gender and print person's gender.

#include <stdio.h>

enum Gender
{
    MALE, FEMALE
};

struct Person
{
    char name[50];
    enum Gender gender;
};

int main()
{
    struct Person p;

    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Enter gender (0 for Male, 1 for Female): ");
    scanf("%d", &p.gender);

    printf("Name: %s\n", p.name);

    if (p.gender == MALE)
        printf("Gender: Male");
    else
        printf("Gender: Female");

    return 0;
}

C:\Users\PRACHI SINGHAL\Downloads\c programming>day89

Enter name: Rahul
Enter gender (0 for Male, 1 for Female): 0
Name: Rahul
Gender: Male