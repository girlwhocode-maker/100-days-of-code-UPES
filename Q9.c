/*
Q9 (User Inputs, Operations & Output)
Write a program to calculate simple and compound interest for given principal, rate, and time.

Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=110.25

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1225.76
*/
#include <stdio.h>
#include <math.h>  // pow function ke liye

int main() {
    double P, R, T;  // Principal, Rate, Time
    double SI, CI;
    
    // Input
    scanf("%lf %lf %lf", &P, &R, &T);
    
    // Simple Interest
    SI = (P * R * T) / 100;
    
    // Compound Interest (compounded annually)
    CI = P * pow((1 + R/100), T) - P;
    
    // Display results
    printf("Simple Interest=%.2lf, Compound Interest=%.2lf\n", SI, CI);
    
    return 0;
}