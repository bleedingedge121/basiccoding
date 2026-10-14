#include <stdio.h>
#include <stdbool.h>

int main() {
    int rows, cols;

    // Ask the user for the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Check if square matrix
    if(rows != cols){
        printf("The matrix is not a square matrix\n");
        return 0;
    }

    // Declare the 2D array (Matrix) with the user-defined dimensions
    int matrix[rows][cols];

    // Take matrix elements as input using nested loops
    printf("\nEnter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {       // Outer loop for rows
        for (int j = 0; j < cols; j++) {   // Inner loop for columns
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);     // Store input at row i, column j
        }
    }

    // Print the matrix to verify the input
    printf("\nThe entered matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);  
        }
        printf("\n");                      // Newline after each row
    }

    // Verify if the matrix is symmetric 
    
    bool symmetric = true; // assume it is symmetric
    
    for (int i = 1; i < rows; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = false;
            }
        }
    }    

    if (symmetric){
        printf("The Matrix is Symmetric");
    }else{
        printf("The Matrix is not Symmetric");
    }


    return 0;
}
