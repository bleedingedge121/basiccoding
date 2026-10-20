#include <stdio.h>

int main()
{
    char reg[50];
    int matrix[3][4];
    int length = 0, i, j, k, start, sum;

    printf("Enter registration number: ");
    scanf("%s", reg);

    // Find the length of the registration number

    while (reg[length] != '\0')
        length++;

    if (length > 12)
        start = length - 12; // take the last 12 digits
    else
        start = 0; // start from the beginning

    // Initialise the matrix with the digits from the registration number

    k = 0; // counts how many digits have been placed so far
    for (i = 0; i < 3; i++)
    {
        // Fill each row of the matrix
        for (j = 0; j < 4; j++)
        {
            matrix[i][j] = reg[(start + k) % length] - '0'; // convert char to int
            k++;
        }
    }

    // Print Matrix

    printf("\nPersonalized Matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%d\t", matrix[i][j]);
        printf("\n");
    }

    // Print Sum of the Row of the matrix

    printf("\nRow Sums:\n");
    for (i = 0; i < 3; i++)
    {
        sum = 0;
        for (j = 0; j < 4; j++)
            sum += matrix[i][j];
        printf("Row %d = %d\n", i + 1, sum);
    }

    printf("\nRegistration Number Used: %s\n", reg);

    return 0;
}