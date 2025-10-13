/*
Q76: Check if a matrix is symmetric.

Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False
*/

#include <stdio.h>

int main() {
    int rows, cols;
    int isSymmetric = 1; // Flag variable, assume matrix is symmetric

    // Taking input for matrix dimensions
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    // Reading matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // A matrix must be square to be symmetric
    if (rows != cols) {
        printf("False\n");
        return 0;
    }

    // Checking symmetry: A[i][j] == A[j][i]
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric)
            break;
    }

    // Printing result
    if (isSymmetric)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
