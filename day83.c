//Create an enum for months and print how many days each month has.


#include <stdio.h>

enum months
{
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main()
{
    printf("January = 31 days\n");
    printf("February = 28 days\n");
    printf("March = 31 days\n");
    printf("April = 30 days\n");
    printf("May = 31 days\n");
    printf("June = 30 days\n");
    printf("July = 31 days\n");
    printf("August = 31 days\n");
    printf("September = 30 days\n");
    printf("October = 31 days\n");
    printf("November = 30 days\n");
    printf("December = 31 days\n");

    return 0;
}

C:\Users\PRACHI SINGHAL\Downloads\c programming>day83

January = 31 days
February = 28 days
March = 31 days
April = 30 days
May = 31 days
June = 30 days
July = 31 days
August = 31 days
September = 30 days
October = 31 days
November = 30 days
December = 31 days