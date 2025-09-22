/*
Q38 (Loops without Arrays/Strings)
Write a program to find the sum of digits of a number.

Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27
*/

#include <stdio.h>

int main() {
    int n, sum = 0;
    
    scanf("%d", &n);  // Input number

    while(n != 0) {
        sum += n % 10;  // Add last digit to sum
        n /= 10;        // Remove last digit
    }

    printf("%d\n", sum);  // Output sum of digits

    return 0;
}



















  





