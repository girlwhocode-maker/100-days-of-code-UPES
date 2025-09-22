/*
Q3 (User Inputs, Operations & Output)
Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
*/
#include <stdio.h>

int main() {
    int length, breadth;
    
    // Taking input
    scanf("%d %d", &length, &breadth);
    
    // Area = length × breadth
    int area = length * breadth;
    
    // Perimeter = 2 × (length + breadth)
    int perimeter = 2 * (length + breadth);
    
    // Display results
    printf("Area = %d\n", area);
    printf("Perimeter = %d\n", perimeter);
    
    return 0;
}
    
