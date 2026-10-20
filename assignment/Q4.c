#include <stdio.h>

// Function to sort the array using bubble sort
void bubbleSort(int a[], int n)
{
    int i, j, t;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            /*
            Swapping condition: if the left element is greater
            than the right element, swap the two adjacent elements
            */
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
}

// main function
int main()
{
    char reg[50];
    int a[8], i;

    // Read the registration number

    printf("Enter registration number: ");
    scanf("%s", reg);

    // Take the first 8 digits of the registration number and store them in an array

    for (i = 0; i < 8; i++)
    {
        a[i] = reg[i] - '0';
    }

    // Print the registration number

    printf("\nRegistration Number: %s\n", reg);

    // Print the original array

    printf("\nOriginal Array: ");
    for (i = 0; i < 8; i++)
        printf("%d ", a[i]);
    printf("\n");

    // Sort the array using the function

    bubbleSort(a, 8);

    // Print the sorted array

    printf("\nSorted Array: ");
    for (i = 0; i < 8; i++)
        printf("%d ", a[i]);
    printf("\n");

    printf("\nSwapping Condition Used: if (a[j] > a[j + 1]) swap the two adjacent elements\n");

    return 0;
}