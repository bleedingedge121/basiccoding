#include <stdio.h>
int main()
{
    char text[200];
    int wc = 0;
    int inWord = 0;
    int i = 0;

    printf("Enter a sentence: ");
    gets(text);

    while (text[i] != '\0')
    {
        if (text[i] == ' ' || text[i] == '\n' || text[i] == '\t')
        {
            inWord = 0;
        }
        else if (inWord == 0)
        {
            inWord = 1;
            wc++;
        }
        i++;
    }

    printf("Word Count: %d\n", wc);
    return 0;
}