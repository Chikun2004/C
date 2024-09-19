#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr_malloc, *ptr_calloc;
    int n = 5;

    // Allocating memory using malloc (memory is not initialized)
    ptr_malloc = (int*)malloc(n * sizeof(int));
    if (ptr_malloc == NULL) {
        printf("Memory allocation using malloc failed\n");
        return 1;
    }

    printf("Memory allocated using malloc (contains garbage values):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr_malloc[i]); // May print garbage values
    }
    printf("\n");

    // Allocating memory using calloc (memory is initialized to zero)
    ptr_calloc = (int*)calloc(n, sizeof(int));
    if (ptr_calloc == NULL) {
        printf("Memory allocation using calloc failed\n");
        free(ptr_malloc);
        return 1;
    }

    printf("Memory allocated using calloc (initialized to zero):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr_calloc[i]); // Prints zeros
    }
    printf("\n");

    // Free the allocated memory
    free(ptr_malloc);
    free(ptr_calloc);

    return 0;
}
