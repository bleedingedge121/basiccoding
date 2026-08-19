#include <stdio.h>

int main()
{
    int ll;
    int ul;
    int i = ll;
    int j;
    int isPrime;

    // Take input
    printf("Enter the lower limit: ");
    scanf("%d", &ll);
    printf("\nEnter the upper limit: ");
    scanf("%d", &ul);

    while (i <= ul)
    {
        // Check if 1 and 0 (Not prime)
        if (i < 2)
        {
            i++;
            continue;
        }

        // Asume the number is not prime
        isPrime = 0;
        j = 2;

        // Second loop to check if number has any divisors
        while (j <= i / 2)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
            else
            {
                isPrime = 1;
            }
            j++;
        }

        // If prime print the number
        if (isPrime == 1)
        {
            printf("%d is a prime number\n", i);
        }

        i++;
    }

    return 0;
}
