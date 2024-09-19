#include <stdio.h>

int main() {
    int a = 5, b = 2;
    float result;
    char c = 'A';

    // Example 1: Integer division without typecasting
    result = a / b;
    printf("Without typecasting (a / b): %f\n", result);

    // Example 2: Integer division with typecasting
    result = (float)a / b;
    printf("With typecasting (float)a / b: %f\n", result);

    // Example 3: Typecasting in assignment
    int int_result;
    result = 7.8;
    int_result = (int)result;
    printf("Typecasting float to int: %d\n", int_result);

    // Example 4: Typecasting char to int
    int ascii_value;
    ascii_value = (int)c;
    printf("Typecasting char to int (ASCII value of '%c'): %d\n", c, ascii_value);

    // Example 5: Typecasting int to char
    int num = 66;
    char char_value = (char)num;
    printf("Typecasting int to char (character with ASCII %d): %c\n", num, char_value);

    return 0;
}
