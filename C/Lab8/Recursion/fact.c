#include <stdio.h>

long Fact(long n);

int main()
{
    long n;

    printf("Enter N: ");
    scanf("%ld", &n);

    printf("N! = %ld\n", Fact(n));

    return 0;
}

long Fact(long n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * Fact(n - 1);
}