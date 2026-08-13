#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a: ");
    scanf("%lf", &a);
    printf("\nEnter coefficients b: ");
    scanf("%lf", &b);
    printf("\nEnter coefficient c: ");
    scanf("%lf", &c);

    if (a == 0)
    {
        printf("Coefficient 'a' cannot be zero.\n");
        return 0;
    }

    discriminant = b * b - 4 * a * c;

    // If D > 0

    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct.\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    }

    // If D == 0

    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    }

    // If D < 0

    else
    {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }

    return 0;
}
