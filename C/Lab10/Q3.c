#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *p, *q;
    char ch;
    char file1[50], file2[50];

    printf("\nSource file name:");
    gets(file1);
    p = fopen(file1, "r");
    if (p == NULL)
    {
        printf("cannot open file");
        exit(0);
    }

    printf("\nDestination file name:");
    gets(file2);
    q = fopen(file2, "w");
    if (q == NULL)
    {
        printf("cannot open file");
        exit(0);
    }

    while ((ch = getc(p)) != EOF)
    {
        putc(ch, q);
    }
    printf("\nFile copied successfully.\n");

    fclose(p);
    fclose(q);
    return 0;
}