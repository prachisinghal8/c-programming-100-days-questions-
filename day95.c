//Return a structure containing top student's details from a function.

#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    float marks;
};

struct Student topper(struct Student s[], int n)
{
    int i, max = 0;

    for (i = 1; i < n; i++)
    {
        if (s[i].marks > s[max].marks)
        {
            max = i;
        }
    }

    return s[max];
}

int main()
{
    struct Student s[5], top;
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter name, roll number and marks of student %d: ", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    top = topper(s, 5);

    printf("\nTop Student Details:\n");
    printf("Name: %s\n", top.name);
    printf("Roll Number: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}

C:\Users\PRACHI SINGHAL\Downloads\c programming>day94

Enter name, roll number and marks of student 1: Rahul 101 85
Enter name, roll number and marks of student 2: Priya 102 92
Enter name, roll number and marks of student 3: Aman 103 78
Enter name, roll number and marks of student 4: Riya 104 88
Enter name, roll number and marks of student 5: Karan 105 90

Top Student Details:
Name: Priya
Roll Number: 102
Marks: 92.00