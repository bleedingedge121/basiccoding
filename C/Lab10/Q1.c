#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *fp;
    char ch;

    fp = fopen("sentence.txt", "r");

    if (fp == NULL)
    {
        printf("Error: File could not be opened.\n");
        exit(0);
    }
    printf("Sentence read from file:\n");

    // Read and display one character at a time until EOF
    while ((ch = getc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}