/*
Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9

Output 1:
1 2 4 7 5 3 6 8 9
*/

#include <stdio.h>

int main() {
    int rows, cols;

    // Taking input for matrix dimensions
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    // Reading matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Diagonal traversal from top-left to bottom-right
    // Step 1: Traverse upper half (including main diagonal)
    for (int k = 0; k < cols; k++) {
        int i = 0;
        int j = k;
        while (i < rows && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
    }

    // Step 2: Traverse lower half (excluding main diagonal)
    for (int k = 1; k < rows; k++) {
        int i = k;
        int j = cols - 1;
        while (i < rows && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
    }

    printf("\n");
    return 0;
}
