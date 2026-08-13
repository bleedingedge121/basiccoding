#include <stdio.h>

int main()
{

    int a;

    printf("Enter Number Of Days book is late: ");
    scanf("%d", &a);

    if (a == 5)
    {
        printf("Fine: ₹0.50");
    }
    else if (a < 10 && a >= 6)
    {
        printf("Fine: ₹1.00");
    }
    else if (a < 30 && a >= 10)
    {
        printf("Fine: ₹5.00");
    }
    else
    {
        printf("Fine: ₹10.00");
    }

    return 0;
}
