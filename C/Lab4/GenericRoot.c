#include <stdio.h>

int main()
{
    int n, ogN, sum, rem;

    printf("Enter a number: ");
    scanf("%d", &n);
    ogN = n;

    while (n >= 10)
    {
        sum = 0;

        while (n > 0)
        {
            rem = n % 10;
            sum = sum + rem;
            n = n / 10;
        }

        n = sum;
    }

    printf("The Generic Root is: %d\n", n);

    return 0;
}
