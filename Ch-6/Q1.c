#include <stdio.h>

int main() {
    int age = 22;
    
    // Pointer to age
    int *ptr = &age;
    
    // Dereferencing the pointer to get the value of age
    int _age = *ptr;
    
    // Print the value of _age
    printf("%d\n", _age);
    
    // Print the address of age
    printf("Address of age: %p\n", &age);
    
    // Print the value stored in ptr (which is the address of age)
    printf("Value of ptr (address of age): %p\n", ptr);
    
    // Print the address of the pointer variable ptr itself
    printf("Address of ptr: %p\n", &ptr);
    
    // Print the value of age directly
    printf("Value of age: %d\n", age);
    
    // Print the value of age using the pointer (dereferencing)
    printf("Value pointed by ptr: %d\n", *ptr);
    
    // Print the value of age using the address of age directly
    printf("Value at address of age: %d\n", *(&age));
    
    return 0;
}
