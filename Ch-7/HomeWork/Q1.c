#include <stdio.h>

int countOccurrences(int array[], int size, int x) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (array[i] == x) {
            count++;
        }
    }

    return count;
}

int main() {
    int array[] = {1, 3, 7, 8, 7, 5, 6, 7, 3, 7};
    int size = sizeof(array) / sizeof(array[0]);
    int x = 7;  // Number to find

    int occurrences = countOccurrences(array, size, x);
    printf("Number %d occurs %d times in the array.\n", x, occurrences);

    return 0;
}
