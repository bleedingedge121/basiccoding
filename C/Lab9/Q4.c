#include <stdio.h>

typedef struct Address
{
    char street[50];
    char city[30];
    int zip;
} Address;

typedef struct Student
{
    int rollno;
    char name[30];
    Address addr; // Nested structure variable
} Student;

int main()
{
    Student s;

    // Input student details and address
    printf("Enter Roll Number: ");
    scanf("%d", &s.rollno);
    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Street: ");
    scanf("%s", s.addr.street);
    printf("Enter City: ");
    scanf("%s", s.addr.city);
    printf("Enter Zip Code: ");
    scanf("%d", &s.addr.zip);

    // Display student details and address
    printf("\n--- Student Details ---\n");
    printf("Roll Number : %d\n", s.rollno);
    printf("Name        : %s\n", s.name);
    printf("Address     : %s, %s - %d\n", s.addr.street, s.addr.city, s.addr.zip);
}