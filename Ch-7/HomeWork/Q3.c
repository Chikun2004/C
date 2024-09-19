#include <stdio.h>

int main() {
    int array[100] = {1, 2, 3, 4, 5};
    int size = 5;  // Initial size of the array
    int newElement = 10;  // Element to insert

    // Insert new element at the end
    array[size] = newElement;
    size++;  // Increase size

    // Print updated array
    printf("Array after inserting element at the end: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
