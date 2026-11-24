#include <stdio.h>

int main()
{
    int arr[] = {10, 23, 45, 70, 11, 15};
    int size = 6;
    int target = 70;
    int found = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Element not found\n");
    }

    return 0;
}