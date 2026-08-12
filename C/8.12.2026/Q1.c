#include <stdio.h>

int main()
{

    int days,remaining_days, months,remaining_months,years;

    printf("Enter Number of Days: ");
    scanf("%d", &days);

    months = days / 30;
    remaining_days = days % 30;

    years = months / 12;
    remaining_months = months % 12;

    printf("Months = %d\n", months);
    printf("Years = %d", years);

    return 0;

}
