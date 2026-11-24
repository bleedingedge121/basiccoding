#include <stdio.h>
#include <string.h>

int main()
{
    int N, i, j;

    printf("Enter the number of Names: ");
    scanf("%d", &N);
    fflush(stdin);

    char STUDENTS_NAMES[N][100];

    // Read names using gets()
    printf("\nEnter the names of %d students:\n", N);
    for (i = 0; i < N; i++)
    {
        printf("Student %d: ", i + 1);
        gets(STUDENTS_NAMES[i]);
    }

    // Displaying the whole strings using a single index
    printf("\n--- Expected Output Samples ---\n");
    for (i = 0; i < N; i++)
    {
        printf("STUDENTS_NAMES[%d]   >>> \"%s\"\n", i, STUDENTS_NAMES[i]);
    }

    return 0;
}
