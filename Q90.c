// Q90: Toggle case of each character in a string.
//
// Sample Test Cases:
// Input 1:
// Hello
// Output 1:
// hELLO

#include <stdio.h>

int main() {
    char str[100];

    // Taking input
    printf("Enter a string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;  // Convert lowercase to uppercase
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;  // Convert uppercase to lowercase
    }

    printf("Toggled String: %s", str);
    return 0;
}







