#include <stdio.h>

int main() {
    char name[100];
    int age;

    // Taking input
    printf("Enter Name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter Age: ");
    scanf("%d", &age);

    // Creating and opening file in write mode
    FILE *fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    // Writing data to the file
    fprintf(fp, "Name: %sAge: %d\n", name, age);

    // Closing file
    fclose(fp);

    printf("File created successfully! Data written to info.txt");

    return 0;
}


