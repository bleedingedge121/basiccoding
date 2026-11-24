#include <stdio.h>

int main()
{
    int i, n, low = 0, high, mid, k, found = 0;

    printf("Enter the number n: ");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter Element of sorted array %d: \n", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search (k): ");
    scanf("%d", &k);

    high = n - 1;

    do
    {
        mid = (low + high) / 2; // mid = low + (high - low) / 2;

        if (k == a[mid])
        {
            found = 1;
            break;
        }
        else if (k < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    } while (low <= high);

    if (found == 1)
    {
        printf("Element %d found at index %d\n", k, mid);
    }
    else
    {
        printf("Element %d not found\n", k);
    }

    return 0;
}