//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    char ch, file1[50], file2[50];

    printf("Enter source file name: ");
    scanf("%s", file1);

    printf("Enter destination file name: ");
    scanf("%s", file2);

    fp1 = fopen(file1, "r");
    fp2 = fopen(file2, "w");

    if (fp1 == NULL || fp2 == NULL)
    {
        printf("File cannot be opened.");
        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
    }

    printf("File copied successfully.");

    fclose(fp1);
    fclose(fp2);

    return 0;
}
C:\Users\PRACHI SINGHAL\Downloads\c programming>day74
Enter source file name: hello
Enter destination file name: hi
File cannot be opened.