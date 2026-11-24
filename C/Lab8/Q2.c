#include <stdio.h>

// Function to calculate the sum of the four corners of a matrix
// Given dimensions: rows (n) and columns (m)
int CornerS(int n, int m, int mat[n][m])
{
    // Check if matrix has at least 1x1 dimensions
    if (n <= 0 || m <= 0)
        return 0;

    int top_left = mat[0][0];             // arr[0][0]
    int top_right = mat[0][m - 1];        // arr[0][m-1]
    int bottom_left = mat[n - 1][0];      // arr[n-1][0]
    int bottom_right = mat[n - 1][m - 1]; // arr[n-1][m-1]

    return top_left + top_right + bottom_left + bottom_right;
}

int main()
{
    // Example: 3 rows and 4 columns matrix
    int rows = 3, cols = 4;
    int matrix[3][4] = {
        {5, 2, 3, 10}, // Top-left: 5, Top-right: 10
        {4, 1, 1, 6},
        {8, 9, 7, 20} // Bottom-left: 8, Bottom-right: 20
    };

    int sum = CornerS(rows, cols, matrix);

    printf("Sum of four corners: %d\n", sum);
    return 0;
}
