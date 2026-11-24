//Find and print the student with the highest marks.

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
    int i, max = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Enter name, roll number and marks of student %d: ", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    for (i = 1; i < 5; i++)
    {
        if (s[i].marks > s[max].marks)
        {
            max = i;
        }
    }

    printf("\nStudent with highest marks:\n");
    printf("Name: %s\n", s[max].name);
    printf("Roll Number: %d\n", s[max].roll_no);
    printf("Marks: %.2f\n", s[max].marks);

    return 0;
}

C:\Users\PRACHI SINGHAL\Downloads\c programming>day92

Enter name, roll number and marks of student 1: Rahul 101 85
Enter name, roll number and marks of student 2: Priya 102 92
Enter name, roll number and marks of student 3: Aman 103 78
Enter name, roll number and marks of student 4: Riya 104 88
Enter name, roll number and marks of student 5: Karan 105 90

Student with highest marks:
Name: Priya
Roll Number: 102
Marks: 92.00