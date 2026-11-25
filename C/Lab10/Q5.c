#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int ch;
    char filename[50];
    int chars = 0, words = 0, lines = 0;

    printf("Enter the file name: ");
    gets(filename);

    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("File could not be opened.\n");
        exit(0);
    }

    while ((ch = getc(fp)) != EOF)
    {
        chars++;

        if (ch == '\n')
        {
            lines++;
        }

        if (ch == ' ' || ch == '\t' || ch == '\n')
        {
            words++;
        }
    }

    // Account for the last word and last line if the file is not empty
    if (chars > 0)
    {
        words++;
        lines++;
    }

    printf("\nNumber of characters = %d\n", chars);
    printf("Number of words      = %d\n", words);
    printf("Number of lines      = %d\n", lines);

    fclose(fp);
    return 0;
}