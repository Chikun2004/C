#include <stdio.h>

// Function to find the maximum of two numbers using pointers
void findMax(int *a, int *b, int *max) {
    if (*a > *b) {
        *max = *a;
    } else {
        *max = *b;
    }
}

int main() {
    int num1, num2, max;

    // Prompt user to enter two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Find the maximum using pointers
    findMax(&num1, &num2, &max);

    // Output the maximum number
    printf("The maximum number is: %d\n", max);

    return 0;
}
