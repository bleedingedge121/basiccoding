#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;

    printf("Enter number 1: ");
    scanf("%d", &a);
    printf("\nEnter number 2: ");
    scanf("%d", &b);
    printf("\nEnter number 3: ");
    scanf("%d", &c);


    if (a >= b && a >= c) {
        printf("Largest number = %d", a);
    }

    else if (b >= a && b >= c) {
        printf("Largest number = %d", b);
    }

    else {
        printf("Largest number = %d", c);
    }

    return 0;
}
