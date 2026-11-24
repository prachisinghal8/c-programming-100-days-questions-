//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>

int main()
{
    FILE *fp;
    char text[100];

    fp = fopen("info.txt", "a");

    if (fp == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }

    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    printf("Text appended successfully.");

    fclose(fp);

    return 0;
}

C:\Users\PRACHI SINGHAL\Downloads\c programming>day75
Enter a line of text: hey
Text appended successfully.