#include <stdio.h>

int main()
{
    int a = 5, b = 8;

    printf("Before: A = %d, B = %d\n", a, b);

    int *pA = &a;
    int *pB = &b;
    int temp;

    temp = *pA;
    *pA = *pB;
    *pB = temp;

    printf("After:  A = %d, B = %d\n", a, b);
    return 0;
}