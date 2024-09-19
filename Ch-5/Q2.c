#include <stdio.h>

// Function to calculate the square of a number
int calcSquare(int n);

int main() {
    int n;
    
    // Prompting user to enter a number
    printf("Enter n: ");
    scanf("%d", &n);
    
    // Calling the function and displaying the result
    printf("Square is: %d\n", calcSquare(n));
    
    return 0;
}

// Function definition to calculate the square of a number
int calcSquare(int n) {
    return n * n;
}
