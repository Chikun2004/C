#include <stdio.h>

struct Student {
    char name[50];
    int marks;
    float cgpa;
    char course[50];
};

int main() {
    struct Student students[5];
    FILE *file;

    // Input student details
    for (int i = 0; i < 5; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]s", students[i].name);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
        printf("CGPA: ");
        scanf("%f", &students[i].cgpa);
        printf("Course: ");
        scanf(" %[^\n]s", students[i].course);
    }

    // Open the file in write mode to store the student information
    file = fopen("students.txt", "w");

    if (file == NULL) {
        printf("Error: Unable to open file!\n");
        return 1;
    }

    // Write student information in a formatted table
    fprintf(file, "----------------------------------------------------------\n");
    fprintf(file, "| %-20s | %-10s | %-5s | %-10s |\n", "Name", "Marks", "CGPA", "Course");
    fprintf(file, "----------------------------------------------------------\n");

    for (int i = 0; i < 5; i++) {
        fprintf(file, "| %-20s | %-10d | %-5.2f | %-10s |\n", students[i].name, students[i].marks, students[i].cgpa, students[i].course);
    }

    fprintf(file, "----------------------------------------------------------\n");

    // Close the file
    fclose(file);

    printf("Student information has been written to 'students.txt' in a table format.\n");

    return 0;
}
