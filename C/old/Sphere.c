#include <stdio.h>
#include <math.h>

int main()
{

    int r;

    printf("Enter the Length: ");
    scanf("%d", &r);

    printf("Volume = %.2f", (4 / 3) * 3.14 * pow(r, 3));
    printf("Surface Area = %.2f", 4 * 3.14 * pow(r, 2));
}