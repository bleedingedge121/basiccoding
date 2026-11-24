#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;
    int max = *ptr;

    for (i = 1; i < n; i++)
    {
        if (*(ptr + i) > max)
        {
            max = *(ptr + i);
        }
    }
    printf("Maximum number = %d\n", max);
    return 0;
}