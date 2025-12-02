/*
Q145: Return a structure containing top student's details from a function.

Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

// Function to get the student with highest marks
struct Student getTopStudent(struct Student s[], int n) {
    int index = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[index].marks) {
            index = i;
        }
    }
    return s[index];  // returning structure
}

int main() {
    struct Student s[3];
    int n = 3;

    // Input for 3 students
    for (int i = 0; i < n; i++) {
        printf("Enter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

    // Get the top student using function
    struct Student topper = getTopStudent(s, n);

    // Output
    printf("\nTop Student: %s | Roll: %d | Marks: %d\n",
           topper.name, topper.roll, topper.marks);

    return 0;
}
