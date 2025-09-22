/*
Q32 (Loops without Arrays/Strings)
Write a program to check if a number is a palindrome.

Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome
*/

#include <stdio.h>

int main() {
    int n, original, reversed = 0;
    
    scanf("%d", &n);  // Input number
    original = n;      // Store original number

    while(n != 0) {
        int digit = n % 10;           // Get last digit
        reversed = reversed * 10 + digit; // Build reversed number
        n /= 10;                      // Remove last digit
    }

    if(reversed == original) {
        printf("Palindrome\n");       // Number is palindrome
    } else {
        printf("Not palindrome\n");   // Number is not palindrome
    }

    return 0;
}













  





