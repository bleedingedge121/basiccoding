#include <stdio.h>

int main()
{
    char name[50];
    int matrix[2][3], transpose[3][2];
    int length = 0, i, j, k;

    printf("Enter your first name: ");
    scanf("%s", name);

    // Find the length of the name
    while (name[length] != '\0')
    {
        length++;
    }

    // fill 2x3 matrix row-wise

    k = 0; // counts how many digits have been placed so far

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            char ch = name[k % length]; // wrap around if name is shorter than 6 characters

            if (ch >= 'a' && ch <= 'z')
                matrix[i][j] = ch - 'a' + 1;
            else
                matrix[i][j] = ch - 'A' + 1;

            k++;
        }
    }

    // Find transpose of the matrix

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print Original and Transpose Matrices

    printf("\nOriginal Matrix (2 x 3):\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", matrix[i][j]);
        }

        printf("\n");
    }

    printf("\nTranspose Matrix (3 x 2):\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", transpose[i][j]);
        }

        printf("\n");
    }

    printf("\nName Used: %s\n", name);

    return 0;
}