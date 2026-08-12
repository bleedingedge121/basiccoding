#include <stdio.h>
#include <math.h>

int main(){

    float u,t,a,s;

    printf("Enter Velocity: ");
    scanf("%f", &u);
    
    printf("Enter Time: ");
    scanf("%f", &t);
    
    printf("Enter Acceleration: ");
    scanf("%f", &a);

    s = u*t + 0.5 * a * pow(t,2);

    printf("Displacement = %.2f\n", s);
}