//Write a program to take a string input. Change it to sentence case.

#include <stdio.h>

int main()
{
    char s[100];
    int i;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    if(s[0] >= 'a' && s[0] <= 'z')
    {
        s[0] = s[0] - 32;
    }

    for(i = 1; s[i] != '\0'; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }

    printf("Sentence case: %s", s);

    return 0;
}

C:\Users\PRACHI SINGHAL\Downloads\c programming>day70
Enter a string: hello prachi
Sentence case: Hello prachi