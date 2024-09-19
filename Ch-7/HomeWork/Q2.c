#include <stdio.h>

int findLargest(int array[], int size) {
    int largest = array[0];

    for (int i = 1; i < size; i++) {
        if (array[i] > largest) {
            largest = array[i];
        }
    }

    return largest;
}

int main() {
    int array[] = {12, 25, 7, 19, 54, 32};
    int size = sizeof(array) / sizeof(array[0]);

    int largest = findLargest(array, size);
    printf("The largest number in the array is: %d\n", largest);

    return 0;
}
