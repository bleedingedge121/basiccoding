#include <stdio.h>

typedef struct
{
    char name[50];
    int rollno;
    float m1, m2, m3;
    float total;
    float avg;
} Student;

int main()
{
    Student s[5];
    int i;

    // Input details for 5 students
    for (i = 0; i < 5; i++)
    {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll Number: ");
        scanf("%d", &s[i].rollno);
        printf("Marks in 3 subjects: ");
        scanf("%f %f %f", &s[i].m1, &s[i].m2, &s[i].m3);

        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
        s[i].avg = s[i].total / 3.0;

        // Display results
        printf("\nStudent Results\n");
        printf("Roll No\tName\tTotal\tAverage\n");
        for (i = 0; i < 5; i++)
        {
            printf("%d\t%s\t%.2f\t%.2f\n", s[i].rollno, s[i].name, s[i].total, s[i].avg);
        }

        return 0;
    }