#include <stdio.h>

int main()
{
    int i, j, n, t;

    printf("Enter the number n: ");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter The Element Of Array %d: \n", i + 1);
        scanf("%d", &a[i]);
    }

    // bubble sort ascending

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1]) // ascending
            {
                t = a[j + 1];
                a[j + 1] = a[j];
                a[j] = t;
            }
        }
    }
    // bubble sort descending
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] < a[j + 1]) // descending
            {
                t = a[j + 1];
                a[j + 1] = a[j];
                a[j] = t;
            }
        }
    }

    // Print sorted array

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}