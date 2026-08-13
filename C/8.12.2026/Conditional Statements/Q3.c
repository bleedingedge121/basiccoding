#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    double discriminant, root1, root2, realPart, imagPart;
    int sign;

    printf("Enter coefficients a: ");
    scanf("%lf", &a);
    printf("\nEnter coefficients b: ");
    scanf("%lf", &b);
    printf("\nEnter coefficient c: ");
    scanf("%lf", &c);

    if (a == 0)
    {
        printf("Coefficient 'a' cannot be zero (not a quadratic equation).\n");
        return 1;
    }

    discriminant = (b * b) - (4 * a * c);

    // Convert discriminant into a discrete category for switch
    if (discriminant > 0)
        sign = 1;
    else if (discriminant == 0)
        sign = 0;
    else
        sign = -1;

    switch (sign)
    {

        // D > 0
    case 1:
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct.\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
        break;

        // D = 0
    case 0:
        root1 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
        break;

        // D<0
    case -1:
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and imaginary.\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imagPart);
        break;

        return 0;
    }