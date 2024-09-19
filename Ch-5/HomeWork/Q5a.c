#include <stdio.h>

int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10; // Add the last digit to sum
        num /= 10;       // Remove the last digit
    }
    return sum;
}

int main() {
    int num;
    
    // Prompt user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Calculate and print the sum of digits
    printf("The sum of the digits is: %d\n", sumOfDigits(num));
    
    return 0;
}
