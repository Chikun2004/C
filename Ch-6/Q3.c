//swap 2 n0.
#include <stdio.h>

// Function prototypes
void swap(int a, int b);      // Call by value
void _swap(int* a, int* b);   // Call by reference

int main() {
    int x = 3, y = 5;

    // Call by value
    swap(x, y);
    printf("After swap function (by value), x = %d & y = %d\n", x, y);

    // Call by reference
    _swap(&x, &y);
    printf("After _swap function (by reference), x = %d & y = %d\n", x, y);

    return 0;
}

// Function definition for call by value
void swap(int a, int b) {
    int t = a;
    a = b;
    b = t;  // Correct the swap logic here
    // This will not affect x and y in main, because a and b are copies
    printf("Inside swap function (by value), a = %d & b = %d\n", a, b);
}

// Function definition for call by reference
void _swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;  // Correct the swap logic here
    // This will affect x and y in main, because we modify the actual values
    printf("Inside _swap function (by reference), *a = %d & *b = %d\n", *a, *b);
}
