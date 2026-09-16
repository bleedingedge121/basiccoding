#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int isPrime = 0;
        if (arr[i] == 2)
        {
            isPrime = 1;
        }
        else if (arr[i] > 2)
        {
            for (int j = 2; j <= arr[i] / 2; j++)
            {
                if (arr[i] % j == 0)
                {
                    isPrime = 0;
                    break;
                }
                else
                {
                    isPrime = 1;
                }
            }
        }
        if (isPrime == 1)
        {
            printf("%d is a prime number.\n", arr[i]);
        }
    }
    return 0;
}
