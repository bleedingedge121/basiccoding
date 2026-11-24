#include <stdio.h>
int fnSum(int n);

int main()
{
    int i, n, sum = 0;
    printf("Enter the limit: ");
    scanf("%d", &n);
    printf("The sum is %d", fnSum(n));
    return 0;
}

// int fnSum(int n)
// {
//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//         sum = sum + i;
//     return (sum);
// }

int fnSum(int x)
{
    if (x == 1) // base case
        return 1;
    else
        return fnSum(x - 1) + x; // recursive case
}
