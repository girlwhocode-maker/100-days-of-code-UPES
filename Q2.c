/*
Q2 (User Inputs, Operations & Output)
Write a program to input two numbers and display their sum, difference, product, and quotient.
*/
#include <stdio.h>

int main() {
    int a, b;
    
    // Taking input
    scanf("%d %d", &a, &b);
    
    // Sum
    printf("Sum = %d\n", a + b);
    
    // Difference
    printf("Difference = %d\n", a - b);
    
    // Product
    printf("Product = %d\n", a * b);
    
    // Quotient with zero check
    if (b != 0) {
        printf("Quotient = %d\n", a / b);
    } else {
        printf("Quotient = Undefined (division by zero)\n");
    }
    
    return 0;
}

