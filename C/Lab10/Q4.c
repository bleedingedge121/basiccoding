#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp1, *fp2;
    int ch;
    char file1[50], file2[50];

    printf("\nSource file name: ");
    gets(file1);
    fp1 = fopen(file1, "r");
    if (fp1 == NULL)
    {
        printf("cannot open file");
        exit(0);
    }

    printf("\nDestination file name: ");
    gets(file2);
    fp2 = fopen(file2, "w");
    if (fp2 == NULL)
    {
        printf("cannot open file");
        exit(0);
    }

    while ((ch = getc(fp1)) != EOF)
    {
        if (ch >= 'a' && ch <= 'z')
            putc(ch - 32, fp2);
        else
            putc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    // Reopen destination file in read mode to display its content
    fp2 = fopen(file2, "r");
    if (fp2 == NULL)
    {
        printf("cannot open file");
        exit(0);
    }

    printf("\nConverted file content:\n");
    while ((ch = getc(fp2)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp2);
    return 0;
}