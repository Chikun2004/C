#include <stdio.h>

int main() {
    int age = 22;
    int *ptr = &age;
    int _age = 25;
    int *_ptr = &_age;

    // Print the original address stored in ptr
    printf("%p\n", (void*)ptr);

    // Increment the pointer (move to the next integer in memory)
    ptr++;
    printf("%p\n", (void*)ptr);

    // Decrement the pointer (move back to the original address)
    ptr--;
    printf("%p\n", (void*)ptr);

    // Subtracting pointers results in the difference in number of elements between them
    // Converting this difference to an integer for printing (even though it's technically incorrect to print %u)
    printf("%ld\n", ptr - _ptr);

    // Point ptr to _age
    ptr = &_age;

    // Compare the pointers and print the result (0 for false, 1 for true)
    printf("%d\n", ptr == _ptr);

    return 0;
}

/*
   # include <stdio.h>
int main() {
int age = 22;
int *ptr = &age;
int _age = 25;
int *_ptr = &_age;
printf("%u\n", ptr);
ptr++;
printf("%u\n", ptr);
ptr--;
printf("%u\n", ptr);
ptr = ptr - _ptr;
printf("%u\n", ptr);
ptr = &_age;
printf("%d\n", ptr == _ptr);
return 0;
}
*/
