//Show that enums store integers by printing assigned values.

#include <stdio.h>

enum numbers
{
    ONE = 1, TWO = 2, THREE = 3
};

int main()
{
    enum numbers n;

    n = ONE;
    printf("ONE = %d\n", n);

    n = TWO;
    printf("TWO = %d\n", n);

    n = THREE;
    printf("THREE = %d\n", n);

    return 0;
}

C:\Users\PRACHI SINGHAL\Downloads\c programming>day88

ONE = 1
TWO = 2
THREE = 3