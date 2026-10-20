#include <stdio.h>
int main()
{

    int iNum = 2;
    switch (iNum)
    {
    case 1:
        printf("ONE/");

    case 2:
        printf("TWO");
        ;
    case 3:
        printf("THREE");

    default:
        printf("INVALID");
    }
}