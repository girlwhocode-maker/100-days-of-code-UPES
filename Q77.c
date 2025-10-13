/*
Q77: Check if the elements on the diagonal of a matrix are distinct.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True
*/

#include <stdio.h>

int main() {
    int rows, cols;
    int isDistinct = 1;  // Flag to check if diagonal elements are distinct

    // Taking input for matrix dimensions
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    // Reading matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // The matrix must be square to have a valid main diagonal
    if (rows != cols) {
        printf("False\n");
        return 0;
    }

    // Checking if diagonal elements are distinct
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < rows; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                isDistinct = 0; // Found duplicate diagonal element
                break;
            }
        }
        if (!isDistinct)
            break;
    }

    // Printing result
    if (isDistinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
