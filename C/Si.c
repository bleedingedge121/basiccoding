#include <stdio.h>
#include <math.h>

int main()
{
    // Initialise Variable
    float P, R;
    int N;

    // Take input
    printf("Enter P: ");
    scanf("%d", &P);

    printf("Enter N: ");
    scanf("%d", &N);

    printf("Enter R: ");
    scanf("%d", &R);

    // Display Output
    printf("SI =  %.2f", (P * N * R) / 100);
    printf("CI = %.2f", pow(P * (1 + R / 100), N) - P);

    return 0;
}