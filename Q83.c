// Q83: Count vowels and consonants in a string.
//
// Sample Test Cases:
// Input 1:
// hello
// Output 1:
// Vowels=2, Consonants=3

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;
    
    // Taking input
    printf("Enter a string: ");
    gets(str);
    
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    
    printf("Vowels=%d, Consonants=%d", vowels, consonants);
    return 0;
}


