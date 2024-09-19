#include <stdio.h>

// Function to calculate the factorial of n
int factorial(int n);

int main() {
    int n;

    // Prompting user to enter a number
    printf("Enter n: ");
    scanf("%d", &n);

    // Calling the function and displaying the result
    printf("Factorial is: %d\n", factorial(n));

    return 0;
}

// Recursive function definition to calculate the factorial of n
int factorial(int n) {
    if (n == 0) {
        return 1;  // Base case: 0! is 1
    }

    // Recursive case: n! = n * (n-1)!
    return n * factorial(n - 1);
}
