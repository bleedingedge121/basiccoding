#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;

    printf("Enter number 1: \n");
    scanf("%d", &a);

    printf("Enter number 2: \n");
    scanf("%d", &b);

    int sum = a + b;
    int diff = a - b;
    float qu = a / b;

    printf("Sum = %d", sum);
    printf("Difference = %d", diff);
    printf("Sum = %f", qu);

    return 0;
}