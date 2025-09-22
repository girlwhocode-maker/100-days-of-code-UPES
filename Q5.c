/*
Q5 (User Inputs, Operations & Output)
Write a program to convert temperature from Celsius to Fahrenheit.
Formula: F = (C × 9/5) + 32
*/

#include<stdio.h>
int main(){
   float c;
   
   printf("enter the temperature in celcius:");
   scanf("%f",&c);
    float f =((9.0/5.0)*c+32.0);
  
    
   printf("the temperature in Fahrenheit is %f",f);
    
    return 0;
}
