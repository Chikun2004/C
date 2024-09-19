#include <stdio.h>

// Function to find square root using the Newton-Raphson method
double squareRoot(double num) {
    double guess = num;
    double epsilon = 0.00001; // Precision level

    // Iterate until the guess is close enough to the actual square root
    while ((guess * guess - num) > epsilon || (num - guess * guess) > epsilon) {
        guess = (guess + num / guess) / 2;
    }

    return guess;
}

int main() {
    double num;
    
    // Prompt user to enter a number
    printf("Enter a number: ");
    scanf("%lf", &num);
    
    // Calculate and print the square root
    printf("The square root of %.2f is approximately %.5f\n", num, squareRoot(num));
    
    return 0;
}
