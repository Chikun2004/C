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
    int num;
    
    // Prompt user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Check if the number is prime
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    
    return 0;
}
