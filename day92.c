//Store details of 5 students in an array of structures and print all.

#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    float marks;
};

int main()
{
    struct Student s[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter name, roll number and marks of student %d: ", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    printf("\nStudent Details:\n");

    for (i = 0; i < 5; i++)
    {
        printf("\nName: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].roll_no);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}

C:\Users\PRACHI SINGHAL\Downloads\c programming>day91

Enter name, roll number and marks of student 1: Rahul 101 85
Enter name, roll number and marks of student 2: Priya 102 92
Enter name, roll number and marks of student 3: Aman 103 78
Enter name, roll number and marks of student 4: Riya 104 88
Enter name, roll number and marks of student 5: Karan 105 90

Student Details:

Name: Rahul
Roll Number: 101
Marks: 85.00

Name: Priya
Roll Number: 102
Marks: 92.00

Name: Aman
Roll Number: 103
Marks: 78.00

Name: Riya
Roll Number: 104
Marks: 88.00

Name: Karan
Roll Number: 105
Marks: 90.00