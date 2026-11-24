//Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inword = 0;

    fp = fopen("info.txt", "r");

    if(fp == NULL)
    {
        printf("File not found");
        return 0;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        characters++;

        if(ch == '\n')
        {
            lines++;
        }

        if(ch == ' ' || ch == '\n')
        {
            inword = 0;
        }
        else if(inword == 0)
        {
            words++;
            inword = 1;
        }
    }

    fclose(fp);

    printf("Total characters = %d\n", characters);
    printf("Total words = %d\n", words);
    printf("Total lines = %d\n", lines);

    return 0;
}
C:\Users\PRACHI SINGHAL\Downloads\c programming>day73
Total characters = 20
Total words = 4
Total lines = 1