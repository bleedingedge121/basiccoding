#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char filename[50];
    int ch, n;
    long len;

    printf("Enter the file name: ");
    gets(filename);

    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("File could not be opened.\n");
        exit(0);
    }

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Move file pointer to the end and find total length of the file
    fseek(fp, 0, SEEK_END);
    len = ftell(fp);

    // Handle cases where n is greater than total file length
    if (n > len)
    {
        n = len;
    }

    // Position the file pointer n characters before the end
    fseek(fp, (len - n), SEEK_SET);

    printf("Last %d characters of the file:\n", n);
    while ((ch = getc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);
    return 0;
}