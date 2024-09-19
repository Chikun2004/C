#include <stdio.h>
#include <math.h> // For pow function

int main() {
    int num, originalNum, remainder, result = 0, n = 0;
    
    // Prompt user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    originalNum = num;
    
    // Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }
    
    originalNum = num;
    
    // Calculate the sum of digits each raised to the power of n
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }
    
    // Check if the result is equal to the original number
    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    
    return 0;
}
