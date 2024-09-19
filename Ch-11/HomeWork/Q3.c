#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*)malloc(100 * sizeof(int)); // Memory allocation

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < 100; i++) {
        ptr[i] = i + 1;
    }

    // Forgot to free the allocated memory, causing a memory leak
    // free(ptr);  // Commenting out free causes memory leak

    printf("Memory leak example (no free call)\n");

    return 0;
}
