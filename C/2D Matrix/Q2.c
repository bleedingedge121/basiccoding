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

    // find the trace of the matrix
    int trace = 0;
    for (int i = 0; i < rows; i++) {
        trace += matrix[i][i]; // Add the diagonal element to trace
    }
    printf("\nThe trace of the matrix is: %d\n", trace);

    //find the norm of the matrix
    int norm = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {        
            norm += matrix[i][j] * matrix[i][j]; 
        }   
    }
    printf("\nThe norm of the matrix is: %d\n", norm);      

}