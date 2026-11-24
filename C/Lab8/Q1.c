#include <stdio.h>

int Fact(int n);

int main()
{
    int N, R;

    printf("Enter N: ");
    scanf("%d", &N);

    printf("Enter R: ");
    scanf("%d", &R);

    printf("NcR = %d\n", Fact(N) / (Fact(R) * Fact(N - R)));

    return 0;
}

int Fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * Fact(n - 1);
}