#include<stdio.h>

int main(){
    int ll;
    int ul;
    printf("Enter the lower limit: ");
    scanf("%d",&ll);
    printf("\nEnter the upper limit: ");
    scanf("%d", &ul);

    for(int i=ll; i<=ul; i++){
        int isPrime = 0;

        for(int j=2; j<=i; j++){

            if(i%j==0 &&j!=1 && j!=i){
                isPrime=0;
                break;
            }
            else isPrime=1;
        }

        if(isPrime==1) printf("%d is a prime number\n", i);
    }

    return 0;

}
