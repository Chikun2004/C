#include <stdio.h>
#include <stdlib.h>

int* createDanglingPointer() {
    int x = 42;
    return &x; // Returning address of local variable (dangling pointer)
}

int main() {
    int *ptr = (int*)malloc(sizeof(int));
    
    // Using the pointer and then freeing the allocated memory
    *ptr = 10;
    printf("Value before free: %d\n", *ptr);
    free(ptr); // ptr becomes a dangling pointer after this

    // Accessing dangling pointer (undefined behavior)
    printf("Accessing dangling pointer: %d\n", *ptr); // Dangerous!
    
    int *danglingPtr = createDanglingPointer(); // Another dangling pointer scenario
    printf("Dangling pointer from function: %d\n", *danglingPtr); // Dangerous!
    
    return 0;
}
