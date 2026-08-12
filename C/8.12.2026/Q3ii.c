#include <stdio.h>
#include <math.h>

int main(){

    float a,b;

    printf("Enter number 1: ");
    scanf("%f", &a);

    printf("Enter number 2: ");
    scanf("%f", &b);

    printf("Whole Square = %.2f\n", pow((a+b),2));
}
