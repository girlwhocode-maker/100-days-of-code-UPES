/*
Q30 (Loops without Arrays/Strings)
Write a program to reverse a given number.

Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1
*/

#include <stdio.h>

int main() {
    int n, reversed = 0;
    
    scanf("%d", &n);  // Input number

    while(n != 0) {
        int digit = n % 10;  // Get last digit
        reversed = reversed * 10 + digit;  // Append digit
        n /= 10;  // Remove last digit
    }

    printf("%d\n", reversed);  // Output reversed number

    return 0;
}











  





