#include <stdio.h>

int main() {
    int a = 10;
    float b = 20.5;
    char c = 'A';
    double d = 30.1234;

    // Print the addresses of the variables
    printf("Address of variable a (int): %p\n", (void*)&a);
    printf("Address of variable b (float): %p\n", (void*)&b);
    printf("Address of variable c (char): %p\n", (void*)&c);
    printf("Address of variable d (double): %p\n", (void*)&d);

    return 0;
}
