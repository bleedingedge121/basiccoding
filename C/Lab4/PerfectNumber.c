#include <stdio.h>

int main()
{
    int n, factSum = 0;

    printf("Enter Number:\n");
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            factSum = factSum + i;
        }
    }

    if (factSum == n)
    {
        printf("Number %d is a perfect number\n", n);
    }
    else
    {
        printf("Number %d is NOT a perfect number\n", n);
    }

    return 0;
}
