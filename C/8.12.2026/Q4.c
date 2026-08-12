#include <stdio.h>
#include <math.h>

int main()
{

    int fiveR,tenR,twentyR;
    float fiftyP,total;

    printf("Five Rupees?: ");
    scanf("%d", &fiveR);

    printf("Ten Rupees?: ");
    scanf("%d", &tenR);

    printf("Twenty Rupees?: ");
    scanf("%d", &twentyR);

    printf("Fifty Paisa?: ");
    scanf("%f", &fiftyP);

    total = fiveR * 5 + tenR * 10 + twentyR * 20 + fiftyP * 0.50;

    printf("Total Money = %.2f\n", total);


}
