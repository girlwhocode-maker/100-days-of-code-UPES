// Q50: Write a program to print the following pattern:
// *****
//  ****
//   ***
//    **
//     *

#include <stdio.h>

int main() {
    int i, j, spaces;

    // Outer loop for rows
    for (i = 5; i >= 1; i--) {
        // Print leading spaces
        for (spaces = 5 - i; spaces > 0; spaces--) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:
Note: Spaces indicate indentation.
*/





























  





