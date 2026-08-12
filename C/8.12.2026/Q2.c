#include <stdio.h>

int main(){

    float seconds,minutes,hours;

    printf("Enter Seconds: ");
    scanf("%f", &seconds);

    minutes = seconds / 60;
    hours = seconds / 3600;

    printf("minutes = %.2f\n", minutes);
    printf("hours = %.2f\n", hours);

    return 0;
}
