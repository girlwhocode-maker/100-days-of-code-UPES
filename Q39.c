/*
Q39 (Loops without Arrays/Strings)
Write a program to find the product of odd digits of a number.

Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)
*/

#include <stdio.h>

int main() {
    int n;
    long long product = 1;
    int hasOdd = 0;  // Flag to check if there is any odd digit

    scanf("%d", &n);  // Input number

    while(n != 0) {
        int digit = n % 10;
        if(digit % 2 != 0) {  // Check if digit is odd
            product *= digit;
            hasOdd = 1;
        }
        n /= 10;
    }

    if(!hasOdd) {
        product = 1;  // No odd digits, assume 1
    }

    printf("%lld\n", product);  // Output product of odd digits

    return 0;
}




















  





