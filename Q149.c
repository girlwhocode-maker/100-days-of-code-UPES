/*
Q149: Use malloc() to allocate structure memory dynamically and print details.

Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88
*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    // Dynamically allocate memory for one student
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input
    printf("Name: ");
    scanf("%s", s->name);

    printf("Roll: ");
    scanf("%d", &s->roll);

    printf("Marks: ");
    scanf("%d", &s->marks);

    // Output
    printf("Name: %s | Roll: %d | Marks: %d\n", s->name, s->roll, s->marks);

    // Free memory
    free(s);

    return 0;
}
