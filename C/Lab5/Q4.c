#include <stdio.h>

int main()
{

    int n, key, found = 0;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to delete: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            found = 1;

            // Shift elements to the left starting from index i
            for (int j = i; j < n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }

            // Decrement logical size
            n--;
            break;
        }
    }

    if (found)
    {
        printf("Resultant array after deletion:\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}