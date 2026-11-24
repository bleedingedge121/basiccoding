#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;
    printf("Enter a string: ");
    gets(str);
    printf("You entered: %s\n", str);

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            printf("%c", str[i] - 32); // Subtract to make it Uppercase
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            printf("%c", str[i] + 32); // Add to make it Lowercase
        }
        else
        {
            printf("%c", str[i]);
        }
        i++;
    }
    printf("Reversed string: ");
    return 0;
}