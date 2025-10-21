// Q86: Check if a string is a palindrome.
//
// Sample Test Cases:
// Input 1:
// madam
// Output 1:
// Palindrome
//
// Input 2:
// hello
// Output 2:
// Not palindrome

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, isPalindrome = 1;

    // Taking input
    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    // Checking palindrome
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}





