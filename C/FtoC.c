#include <stdio.h>

void main()
{
    float F = 0;
    float C = 0;

    printf("Enter the Fahrenheit Temp: ");
    scanf("%f", &F);

    printf("Centigrade Temp: %f", (0.55) * (F - 32));

    return 0;
}