#include <stdio.h>

int main() {
    int marks[5];
    int total_marks = 0;
    float percentage;
    int i;

    // Input marks for each subject
    for (i = 0; i < 5; i++) {
        printf("Enter marks obtained in subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        // Sum up the total marks
        total_marks += marks[i];
    }

    // Calculate percentage
    percentage = (total_marks / 500.0) * 100;

    // Display aggregate and percentage marks
    printf("Aggregate Marks = %d\n", total_marks);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}
