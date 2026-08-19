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

    printf("Sum = %d", sum);

    return 0;
}