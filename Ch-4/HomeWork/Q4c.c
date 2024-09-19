#include <stdio.h>
#include <stdbool.h> // For bool type

bool isPrime(int num) {
    if (num <= 1) return false; // Numbers less than or equal to 1 are not prime
    if (num == 2) return true;  // 2 is a prime number
    if (num % 2 == 0) return false; // Even numbers other than 2 are not prime
    
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false; // If divisible by i, it's not prime
    }
    
    return true;
}

int main() {
    int start, end;
    
    // Prompt user to enter the range
    printf("Enter the starting number of the range: ");
    scanf("%d", &start);
    printf("Enter the ending number of the range: ");
    scanf("%d", &end);
    
    // Print prime numbers in the specified range
    printf("Prime numbers between %d and %d are:\n", start, end);
    for (int num = start; num <= end; num++) {
        if (isPrime(num)) {
            printf("%d ", num);
        }
    }
    printf("\n"); // Move to the next line after printing all prime numbers
    
    return 0;
}
