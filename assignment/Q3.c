#include <stdio.h>

int main()
{
    char reg[50];
    int a[5], i, j, t, length = 0, pass;

    printf("Enter registration number: ");
    scanf("%s", reg);

    // Find the length of the registration number

    while (reg[length] != '\0')
    {
        length++;
    }

    // Take the last 5 digits of the registration number and store them in an array

    for (i = 0; i < 5; i++)
    {
        a[i] = reg[length - 5 + i] - '0';
    }

    // Print the original array
    printf("\nOriginal Array: ");
    for (i = 0; i < 5; i++)
        printf("%d ", a[i]);
    printf("\n");

    // Bubble Sort the array
    for (pass = 1; pass < 5; pass++)
    {
        for (j = 0; j < 5 - pass; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }

        printf("\nAfter Pass %d: ", pass);
        for (i = 0; i < 5; i++)
        {
            printf("%d ", a[i]);
        }

        printf("\nElement placed in correct position: %d", a[5 - pass]);
        printf("\n");
    }

    // Print the final sorted array

    printf("\nFinal Sorted Array: ");
    for (i = 0; i < 5; i++)
        printf("%d ", a[i]);
    printf("\n\nRegistration Number Used: %s\n", reg);

    return 0;
}