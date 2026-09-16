#include <stdio.h>

int main()
{
    int N;

    printf("Enter the number of students (N): ");
    scanf("%d", &N);

    int STUDENTS[N];

    printf("Enter the roll numbers of %d students:\n", N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &STUDENTS[i]);
    }

    printf("\nRoll Numbers of Students:\n");
    for (int i = 0; i < N; i++)
    {
        printf("Student %d: %d\n", i + 1, STUDENTS[i]);
    }

    int searchRoll;
    printf("\nEnter roll number to search: ");
    scanf("%d", &searchRoll);

    int foundIndex = -1;
    for (int i = 0; i < N; i++)
    {
        if (STUDENTS[i] == searchRoll)
        {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1)
    {
        printf("Success: Roll number %d found at position %d (index %d).\n",
               searchRoll, foundIndex + 1, foundIndex);
    }
    else
    {
        printf("Failure: Roll number %d not found in the list.\n", searchRoll);
    }

    return 0;
}