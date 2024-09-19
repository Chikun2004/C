//Pointerr in function call
#include <stdio.h>

// Function declarations
void square(int n);       // Call by value
void _square(int* n);    // Call by reference

int main() {
    int number = 4;
    
    // Call by value
    square(number);
    printf("After square function (by value), n is: %d\n", number);
    
    // Call by reference
    _square(&number);
    printf("After _square function (by reference), n is: %d\n", number);
    
    return 0;
}

// Function definition for call by value
void square(int n) {
    n = n * n;  // This only changes the local copy of n
    printf("Square (by value) is: %d\n", n);
}

// Function definition for call by reference
void _square(int* n) {
    *n = *n * *n;  // This changes the actual value of number
    printf("Square (by reference) is: %d\n", *n);
}
