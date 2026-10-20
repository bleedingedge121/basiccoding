#include <stdio.h>

int main(){
    int m,n,sym;

    printf("Enter number of Rows:\n");
    scanf("%d", &m);
    printf("Enter number of columns:\n");
    scanf("%d", &n);

    int matrix[m][n];

    printf("Enter The Elements: ");

    //Input 2D array

    for(int i = 0;i < m; i++){
        for(int j = 0; j < n; j++){
            printf("Enter elemnt a %d%d : ", i,j);
            scanf("%d", &matrix[i][j]);
        }
    }    

    //Print 2D array
    
    for(int i = 0;i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    
    
    // Transpose the matrix/Array and Check for symmetric matrix

    int matrixT[n][m];
    sym = 1;

    for (int i = 0; i < m; i++)
    {
        for(int j =0; j < n; j++){
            
            if (matrixT[j][i] != matrix[i][j])
            {
                sym = 0;
            }
            matrixT[j][i] = matrix[i][j];
            
        }
    }
    

    //Print Transpose Matrix/Array
    printf("Transpose Matrix: \n");

    for(int i = 0;i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d\t",matrixT[i][j]);
        }
        printf("\n");
    }

    if (sym == 1)
    {
       printf("The Matrix is symmetric\n");
    }
    else{
        printf("The matrix is not symmetric\n");
    }

}
