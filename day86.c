//Assign explicit values starting from 10 and print them.

#include <stdio.h>

enum status
{
    SUCCESS = 10,
    FAILURE = 11,
    TIMEOUT = 12
};

int main()
{
    printf("SUCCESS = %d\n", SUCCESS);
    printf("FAILURE = %d\n", FAILURE);
    printf("TIMEOUT = %d\n", TIMEOUT);

    return 0;
}

C:\Users\PRACHI SINGHAL\Downloads\c programming>day85

SUCCESS = 10
FAILURE = 11
TIMEOUT = 12