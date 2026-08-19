#include <stdio.h>

int main()
{
    int num, originalNum, rem, sum = 0;
    long fact;

    // Get input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Copy the original number to preserve its value
    originalNum = num;

    // Loop to process each digit
    while (num > 0)
    {
        rem = num % 10; // Extract the last digit
        fact = 1;

        // Calculate the factorial of the extracted digit
        for (int i = 1; i <= rem; i++)
        {
            fact *= i;
        }

        sum += fact;
        num /= 10;
    }

    // Check if the sum of factorials matches the original number
    if (sum == originalNum)
    {
        printf("%d is a Strong Number.\n", originalNum);
    }
    else
    {
        printf("%d is NOT a Strong Number.\n", originalNum);
    }

    return 0;
}
