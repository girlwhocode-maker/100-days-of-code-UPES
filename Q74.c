/*
Q74: Find the transpose of a matrix.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6

Output 1:
1 4
2 5
3 6
*/

#include <stdio.h>

int main() {
    int rows, cols;

    // Taking input for number of rows and columns
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int transpose[cols][rows]; // Transpose matrix has dimensions swapped

    // Reading matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculating transpose of the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Printing the transpose matrix
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}




