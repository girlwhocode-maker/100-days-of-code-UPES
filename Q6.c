/*
Q6 (User Inputs, Operations & Output)
Write a program to swap two numbers using a third variable.
*/
#include <stdio.h>

int main() {
    int a, b, temp;
    
    // Taking input
    scanf("%d %d", &a, &b);
    
    // Swapping using third variable
    temp = a;
    a = b;
    b = temp;
    
    // Display result
    printf("After swapping: a = %d, b = %d\n", a, b);
    
    return 0;
}
