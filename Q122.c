#include <stdio.h>

int main() {
    char line[200];

    // Open the file in read mode
    FILE *fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Error: Could not open file!");
        return 1;
    }

    // Read and print lines until EOF
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    // Close the file
    fclose(fp);

    return 0;
}

