#include <stdio.h>

int main()
{
    int N, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);

    int MARKS[N];

    printf("Enter %d elements:\n", N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &MARKS[i]);
    }

    // Arranging in descending order bubble sort
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (MARKS[j] < MARKS[j + 1])
            {
                // Swap MARKS[j] and MARKS[j+1]
                int temp = MARKS[j];
                MARKS[j] = MARKS[j + 1];
                MARKS[j + 1] = temp;
            }
        }
    }

    printf("\nSorted array in descending order:\n");
    for (i = 0; i < N; i++)
    {
        printf("%d ", MARKS[i]);
    }

    return 0;
}
