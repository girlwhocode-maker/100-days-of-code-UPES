#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int capitalize = 1;  // start by capitalizing first letter

    for (int i = 0; str[i] != '\0'; i++) {
        if (capitalize && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');  // convert to uppercase
        } else if (!capitalize && str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');  // convert to lowercase (optional)
        }

        // Next character should be capitalized if current is a space
        capitalize = (str[i] == ' ');
    }

    printf("%s", str);

    return 0;
}


