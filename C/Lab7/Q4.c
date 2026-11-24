#include <stdio.h>
#include <string.h>

int main()
{
    char sent[50], temp[50], str[10][50], word[20];
    int i = 0, j = 0, n = 0, k, r = 0;

    printf("INPUT: ");
    fflush(stdin);
    gets(sent);

    printf("TO BE DELETED: ");
    scanf("%s", word);

    // Split the sentence into a 2D array of individual words
    for (i = 0;; i++)
    {
        if (sent[i] != ' ' && sent[i] != '\0')
        {
            str[n][j++] = sent[i];
        }
        else
        {
            str[n][j] = '\0'; // Terminate the current word
            if (sent[i] == '\0')
            {
                break; // Stop at the end of the sentence
            }
            n++;   // Move to the next row for the next word
            j = 0; // Reset character index for the new word
        }
    }

    // Search and delete the target word by shifting rows
    for (i = 0; i <= n; i++)
    {
        if (strcmp(str[i], word) == 0)
        {
            int pos = i;
            if (pos == n)
            {
                n = n - 1;
            }
            else
            {
                for (k = pos; k < n; k++)
                {
                    strcpy(str[k], str[k + 1]);
                }
                n = n - 1;
            }
            i--; // Decrement i to recheck the current index after shifting
        }
    }

    // Reassemble the remaining words back into a single sentence
    for (i = 0; i <= n; i++)
    {
        for (j = 0; str[i][j] != '\0'; j++)
        {
            temp[r++] = str[i][j];
        }
        // Add a space between words, except after the very last word
        if (i < n)
        {
            temp[r++] = ' ';
        }
    }
    temp[r] = '\0'; // Terminate the final output sentence

    printf("OUTPUT: ");
    puts(temp);

    return 0;
}
