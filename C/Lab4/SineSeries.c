#include <stdio.h>

int main()
{
    float x, sum = 0;
    int n, i, j;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {

        // Find the power and factorial numbers for this term.
        int num = 2 * i - 1;

        // Calculate power: x^num
        float power = 1.0;
        for (j = 1; j <= num; j++)
        {
            power = power * x;
        }

        // Calculate factorial
        float factorial = 1.0;
        for (j = 1; j <= num; j++)
        {
            factorial = factorial * j;
        }

        // 3. Add or subtract the term based on its position
        if (i % 2 == 1)
        {
            sum = sum + (power / factorial); // Odd terms are added
        }
        else
        {
            sum = sum - (power / factorial); // Even terms are subtracted
        }
    }

    // 4. Print the final answer
    printf("Sin(%.2f) up to %d terms = %.4f\n", x, n, sum);

    return 0;
}
