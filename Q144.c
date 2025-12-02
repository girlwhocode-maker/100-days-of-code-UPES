/*
Q144: Write a function that accepts a structure as parameter and prints its members.

Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

// Function that accepts a structure as a parameter
void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student s;

    // Input
    printf("Name: ");
    scanf("%s", s.name);

    printf("Roll: ");
    scanf("%d", &s.roll);

    printf("Marks: ");
    scanf("%d", &s.marks);

    // Function call
    printStudent(s);

    return 0;
}

