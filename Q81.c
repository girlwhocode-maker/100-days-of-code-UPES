/*
Q81: Count characters in a string without using built-in length functions.

Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1
*/

#include <stdio.h>

int main() {
    char str[1000];  // Declare a string of max size 1000
    int count = 0;   // Variable to count characters

    // Reading input string (including spaces)
    fgets(str, sizeof(str), stdin);

    // Counting characters until null character '\0'
    while (str[count] != '\0' && str[count] != '\n') {
        count++;
    }

    // Printing the number of characters
    printf("%d\n", count);

    return 0;
}
