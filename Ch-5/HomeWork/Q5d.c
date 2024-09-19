#include <stdio.h>

// Function to calculate power
double myPow(double base, int exponent) {
    double result = 1.0;
    int i;

    for (i = 0; i < exponent; i++) {
        result *= base;
    }
    
    return result;
}

int main() {
    double base;
    int exponent;
    
    // Prompt user to enter base and exponent
    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    
    // Calculate and print the power
    printf("%.2f raised to the power of %d is %.2f\n", base, exponent, myPow(base, exponent));
    
    return 0;
}
