#include <stdio.h>

int main() {
    int i, j;
    int rows = 4; // Number of rows
    int cols = 5; // Number of columns

    // Outer loop for rows
    for (i = 0; i < rows; i++) {
        // Inner loop for columns
        for (j = 0; j < cols; j++) {
            printf("*");
        }
        printf("\n"); // Move to the next line after printing all columns in a row
    }

    return 0;
}
