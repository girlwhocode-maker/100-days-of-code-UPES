/*
Q28 (Loops without Arrays/Strings)
Write a program to print the product of even numbers from 1 to n.

Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)
*/

#include <stdio.h>

int main() {
    int n;
    long long product = 1;

    scanf("%d", &n);  // Input n

    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) {  // Check if number is even
            product *= i;
        }
    }

    printf("%lld\n", product);  // Output the product

    return 0;
}








  





