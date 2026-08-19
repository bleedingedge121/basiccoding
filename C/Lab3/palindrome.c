#include<stdio.h>
int main()
{
    int n,reversed = 0,original,remainder;
    
    printf("Enter number: ");
    scanf("%d",&n);

    //save value of n
    original = n;

    //While logic
    while(n !=0){
        remainder = n % 10; // Last digit
        reversed = reversed * 10 + remainder;
        n /=10; 
    }

    //Check if Original and reversed are same

    if(original == reversed){
        printf("%d is a Palindrome.\n",original);
    }
    else{
         printf("%d is not a Palindrome.\n",original);
    }
    
    return 0;
}