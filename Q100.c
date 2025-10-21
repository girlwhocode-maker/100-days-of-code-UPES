// Q100: Print all sub-strings of a string.
//
// Sample Test Cases:
// Input 1:
// abc
// Output 1:
// a, ab, abc, b, bc, c

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len;

    // Taking input
    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    printf("All substrings: ");
    for (int i = 0; i < len; i++) {       // Start index
        for (int j = i; j < len; j++) {   // End index
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf(", ");  // Separator between substrings
        }
    }

    return 0;
}
















