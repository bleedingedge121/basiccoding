#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    FILE *fp;

    fp = fopen("sentence.txt", "a");

    if (fp == NULL)
    {
        printf("File could not be opened \n");
        return 0;
    }

    printf("Enter the content for file: \n");

    while ((c = getchar()) != EOF)
        putc(c, fp);

    fclose(fp);
    return 0;
}