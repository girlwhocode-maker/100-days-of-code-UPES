// Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    int numerator = 2, denominator = 3;

    // Input number of terms
    scanf("%d", &n);

    // Calculate sum of the series
    for (i = 1; i <= n; i++) {
        sum += (float)numerator / denominator;
        numerator += 2;
        denominator += 4;
    }

    // Output approximate sum
    printf("Approximate sum: %.2f", sum);

    return 0;
}

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22
*/

























  





