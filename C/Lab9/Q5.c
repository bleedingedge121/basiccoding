#include <stdio.h>

typedef struct Product
{
    int pID;
    char name[50];
    float price;

} Product;

int main()
{
    int n, i = 0;
    printf("Enter the number of products: ");
    scanf("%d", &n);

    Product arr[n];
    Product *pArr = arr;

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of product %d\n", i + 1);

        printf("Product ID: ");
        scanf("%d", &(*(pArr + i)).pID);

        printf("Name: ");
        // fgets((*(pArr + i)).name, 50, stdin);
        scanf(" %49[^\n]", (*(pArr + i)).name);

        printf("Price: ");
        scanf("%f", &(*(pArr + i)).price);
    }

    printf("\n%s\t%s\t\t%s\n", "ID", "Name", "Price");
    printf("------------------------------------------\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t%s\t\t%.2f\n",
               (*(pArr + i)).pID,
               (*(pArr + i)).name,
               (*(pArr + i)).price);
    }

    return 0;
}
