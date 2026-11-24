#include <stdio.h>

int main()
{
    int i, j, n, t, min_idx;

    printf("Enter the number n: ");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter The Element Of Array %d: \n", i + 1);
        scanf("%d", &a[i]);
    }

    // Selection sort
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min_idx]) // ascending
            {
                min_idx = j;
            }
        }

        // Swap the found minimum element with the first unsorted element
        if (min_idx != i)
        {
            t = a[min_idx];
            a[min_idx] = a[i];
            a[i] = t;
        }
    }

    // Print sorted array
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}