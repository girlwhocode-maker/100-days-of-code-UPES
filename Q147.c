/*
Q147: Store employee data in a binary file using fwrite() and read using fread().

Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.
*/

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e, temp;
    FILE *fp;

    // Input employee data
    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    // Write to binary file
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("File opening error!\n");
        return 1;
    }
    fwrite(&e, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Read from binary file
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("File opening error!\n");
        return 1;
    }
    fread(&temp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Display result
    printf("\nEmployee Data Read from File:\n");
    printf("Name: %s | ID: %d | Salary: %.2f\n", temp.name, temp.id, temp.salary);

    return 0;
}
