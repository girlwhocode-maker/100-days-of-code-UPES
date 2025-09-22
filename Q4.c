/*
Q4 (User Inputs, Operations & Output)
Write a program to calculate the area and circumference of a circle given its radius.
*/
#include <stdio.h>

int main() {
    float radius, area, circumference;
    
    // Taking input
    scanf("%f", &radius);
    
    // Calculations
    area = 3.14159 * radius * radius;          // πr²
    circumference = 2 * 3.14159 * radius;      // 2πr
    
    // Display results
    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);
    
    return 0;
}