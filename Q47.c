// Q47: Write a program to print the following pattern:
// *
// **
// ***
// ****
// *****

#include <stdio.h>

int main() {
    int i, j;

    // Outer loop for rows
    for (i = 1; i <= 5; i++) {
        // Inner loop for stars
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
*
**
***
****
*****
*/



























  





