#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 500;

    // Allocating memory for 500 integers using calloc
    arr = (int*)calloc(n, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Storing the first 500 natural numbers
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    // Printing the first 10 numbers as a sample output
    printf("First 10 natural numbers stored in array:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}
