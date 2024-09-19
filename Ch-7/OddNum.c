#include <stdio.h>

int countOddNumbers(int rows, int cols, int array[rows][cols]) {
    int count = 0;

    // Iterate through the 2D array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Check if the element is odd
            if (array[i][j] % 2 != 0) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int rows = 3, cols = 3;
    int array[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int oddCount = countOddNumbers(rows, cols, array);
    printf("Number of odd numbers in the array: %d\n", oddCount);

    return 0;
}
