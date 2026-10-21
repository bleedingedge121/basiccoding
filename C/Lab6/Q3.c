#include <stdio.h>
#include <stdbool.h>

int main() {
    int rows1, cols1, rows2, cols2;

    // Ask the user for the number of rows and columns
    printf("Enter the number of rows of matrix 1: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns of matrix 1: ");
    scanf("%d", &cols1);

    // Check if square matrix
    if(rows1 != cols1){
        printf("The matrix is not a square matrix\n");
        return 0;
    }

    printf("Enter the number of rows of matrix 2: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns of matrix 2: ");
    scanf("%d", &cols2);

    // Check if the matrices can be multiplied
    if(cols1 != rows2){
        printf("The matrices cannot be multiplied\n");
        return 0;
    }

    // Declare the 2D array (Matrix) with the user-defined dimensions
    int matrix1[rows1][cols1];
    int matrix2[rows2][cols2];
    int result[rows1][cols2];

    // Take matrix elements as input using nested loops
    printf("\nEnter the elements of the matrix 1:\n");
    
    for (int i = 0; i < rows1; i++) {       // Matrix 1 input
        for (int j = 0; j < cols1; j++) {   
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);     
        }
    }

    printf("\nEnter the elements of the matrix 2:\n");
    
    for (int i = 0; i < rows2; i++) {       // Matrix 2 input
        for (int j = 0; j < cols2; j++) {   
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix2[i][j]);     
        }
    }

    // Print the matrix to verify the input
    printf("\nThe entered matrix is:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("%d\t", matrix1[i][j]);  
        }
        printf("\n");                      // Newline after each row
    }

    // Print the second matrix to verify the input
    printf("\nThe entered matrix 2 is:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d\t", matrix2[i][j]);  
        }
        printf("\n");                      // Newline after each row
    }

    // Check if the matrices can be multiplied
    if (cols1 != rows2) {
        printf("The matrices cannot be multiplied\n");
        return 0;
    }

    // Matrix Multiplication
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0; 
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j]; // Perform multiplication and addition
            }
        }
    }

    // Print the result of the multiplication
    printf("\nThe result of the multiplication is:\n");
    
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

}