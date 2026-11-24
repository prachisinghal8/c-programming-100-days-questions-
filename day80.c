//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];
    int roll, n, i;
    float marks;

    fp = fopen("student.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Enter name, roll number and marks: ");
        scanf("%s %d %f", name, &roll, &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("student.txt", "r");

    printf("\nStudent Records:\n");

    while (fscanf(fp, "%s %d %f", name, &roll, &marks) != EOF)
    {
        printf("Name: %s\n", name);
        printf("Roll Number: %d\n", roll);
        printf("Marks: %.2f\n\n", marks);
    }

    fclose(fp);

    return 0;
}

C:\Users\PRACHI SINGHAL\Downloads\c programming>day80

Enter number of students: 2
Enter name, roll number and marks: Rahul 101 85
Enter name, roll number and marks: Priya 102 92

Student Records:
Name: Rahul
Roll Number: 101
Marks: 85.00

Name: Priya
Roll Number: 102
Marks: 92.00