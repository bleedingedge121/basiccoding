

int main()
{
    int n, k;

    printf("Enter the number of numbers (n): ");
    scanf("%d", &n);

    printf("Enter the number of terms (k): ");
    scanf("%d", &k);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            printf("%d ", i * j);
        }
        printf("\n");
    }

    return 0;
}