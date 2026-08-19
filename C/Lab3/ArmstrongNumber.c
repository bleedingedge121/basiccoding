#include <stdio.h>
#include <math.h>
int main()
{
    int n, digits, original, cubeSum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0)
    {
        digits = n % 10; // Last digit
        cubeSum = cubeSum + pow(digits, 3);
        n /= 10;
    }

    if (cubeSum == original)
    {
        printf("The number %d is Armstrong number", original);
    }
    else
    {
        printf("The number %d is not Armstrong number", original);
    }

    return 0;
}