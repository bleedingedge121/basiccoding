#include <stdio.h>

int main()
{
    int n,a;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to delete: ");
    scanf("%d", &a);


    for (int i = 0; i < n; i++)
    {
        if (arr[i] == a)
        {

            // Shift elements to the left starting from index i
            for (int j = i; j < n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }

            // Decrement logical size
            n--;
        }
    }

    printf("Resultant array after deletion:\n");
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
