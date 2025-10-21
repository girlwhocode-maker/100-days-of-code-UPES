// Q88: Replace spaces with hyphens in a string.
//
// Sample Test Cases:
// Input 1:
// hello world
// Output 1:
// hello-world

#include <stdio.h>

int main() {
    char str[100];

    // Taking input
    printf("Enter a string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            str[i] = '-';  // Replace space with hyphen
    }

    printf("Modified String: %s", str);
    return 0;
}







