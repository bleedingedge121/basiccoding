#include <stdio.h>
int main()
{
    int n, prime = 0, composite = 0, i = 2, isPrime;

    /*
    Q Why do while ??
    Ans = we need to ask the user once atleast before then check if its -1
    */

    do
    {
        printf("Enter a number: ");
        scanf("%d", &n);

        // break at -1
        if (n == -1)
        {
            break;
        }

        if (n == 1 || n == 0)
        {
            // neither 0 or 1 is prime or composite
            continue;
        }

        // if n is negetive
        if (n < 0)
        {
            continue;
        }

        // Asume its a prime number
        isPrime = 1;

        while (i <= n / 2)
        {
            // Check if it has factors
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
            i++;
        }

        // Increase count of prime and composite
        if (isPrime)
            prime++;
        else
            composite++;

    } while (n != -1);

    printf("Number of Prime numbers: %d\n", prime);
    printf("Number of Composite numbers: %d\n", composite);

    return 0;
}