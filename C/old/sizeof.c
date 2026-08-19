#include <stdio.h>

void main()
{
    int age = 25;
    double salary = 50000.50;
    char ch = 'A';
    float f = 3.0;

    // Using data types
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of float: %zu bytes\n", sizeof(float));

    return 0;
}