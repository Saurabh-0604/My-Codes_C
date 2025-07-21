#include <stdio.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    int n, i;
    
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n]; // Array of student structures

    // Input student details
    for(i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);  // Doesn't handle spaces in name
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display student details
    printf("\n--- Student Details ---\n");
    for(i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}
