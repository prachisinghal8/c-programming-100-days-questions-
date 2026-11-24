//Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

#include <stdio.h>

enum status
{
    SUCCESS, FAILURE, TIMEOUT
};

int main()
{
    enum status result;

    result = SUCCESS;

    if (result == SUCCESS)
        printf("Operation Successful");

    else if (result == FAILURE)
        printf("Operation Failed");

    else if (result == TIMEOUT)
        printf("Operation Timed Out");

    return 0;
}

C:\Users\PRACHI SINGHAL\Downloads\c programming>day84

Operation Successful