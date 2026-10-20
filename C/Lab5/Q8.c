#include <stdio.h>

int main()
{
    int n, index,e;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d",&e);

    for(int i =0; i < n;i++){
        if (arr[i])
        {
            arr[i] == e;
            index = i;
            break;
        }
        
    }

    printf("The index of the element is: %d", index);
}
