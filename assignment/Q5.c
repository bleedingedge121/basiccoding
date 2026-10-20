#include <stdio.h>

int main()
{
    char reg[50];
    int a[8], i, length = 0, key, comparisons = 0, position = -1;

    // Read the registration number

    printf("Enter registration number: ");
    scanf("%s", reg);

    // Find the length of the registration number

    while (reg[length] != '\0')
    {
        length++;
    }

    // Take the last 8 digits of the registration number and store them in an array

    for (i = 0; i < 8; i++)
    {
        a[i] = reg[length - 8 + i] - '0';
    }

    // The fourth element of the array is the search key

    key = a[3];

    // Print the personalized array and the search key

    printf("\nRegistration Number: %s\n", reg);

    printf("\nPersonalized Array: ");
    for (i = 0; i < 8; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    printf("Search Key: %d\n", key);

    // Linear search stop at the first occurrence of the key

    for (i = 0; i < 8; i++)
    {
        comparisons++;

        if (a[i] == key)
        {
            position = i + 1; // position starts from 1
            break;
        }
    }

    // Print the result

    if (position != -1)
        printf("\nKey %d found at position %d (index %d)\n", key, position, position - 1);
    else
        printf("\nKey %d not found\n", key);

    printf("Number of comparisons: %d\n", comparisons);

    return 0;
}