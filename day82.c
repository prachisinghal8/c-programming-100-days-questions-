//Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

#include <stdio.h>

enum traffic
{
    RED, YELLOW, GREEN
};

int main()
{
    enum traffic light;

    light = RED;

    if (light == RED)
        printf("Stop");

    else if (light == YELLOW)
        printf("Wait");

    else if (light == GREEN)
        printf("Go");

    return 0;
}

C:\Users\PRACHI SINGHAL\Downloads\c programming>day82

Stop