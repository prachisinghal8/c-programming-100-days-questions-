//A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

#include <stdio.h>

int main()
{
    FILE *fp;
    int num, sum = 0, count = 0;
    float avg;

    fp = fopen("numbers.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }

    while (fscanf(fp, "%d", &num) != EOF)
    {
        sum = sum + num;
        count++;
    }

    if (count > 0)
    {
        avg = (float)sum / count;

        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", avg);
    }
    else
    {
        printf("File is empty.");
    }

    fclose(fp);

    return 0;
}

C:\Users\PRACHI SINGHAL\Downloads\c programming>day79

Input in numbers.txt: 10 20 30 40 50

Sum = 150
Average = 30.00