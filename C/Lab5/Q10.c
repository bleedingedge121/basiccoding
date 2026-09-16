#include <stdio.h> 
int main(){

    int n,sum=0;

    printf("Enter the number of digits in the number: ");
    scanf("%d", &n);

    int arr[n];
    
    printf("Enter %d digit:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
       sum = (sum * 10) + arr[i];
    }
    
    printf("Number is : %d ", sum);

}
