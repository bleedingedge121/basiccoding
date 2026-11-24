#include <stdio.h>

int GCD(int x, int y);

int main()
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("GCD(%d, %d) = %d\n", x, y, GCD(x, y));

    return 0;
}

int GCD(int x, int y)
{
    if (y == 0)
    {
        return x;
    }

    return GCD(y, (x % y));
}