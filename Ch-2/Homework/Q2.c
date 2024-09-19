#include <stdio.h>
#include <ctype.h>  // For isdigit function

int main() {
    // Task a: Print the average of 3 numbers
    float num1, num2, num3, average;
    
    // Prompt user to enter three numbers
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    printf("Enter the third number: ");
    scanf("%f", &num3);
    
    // Calculate the average
    average = (num1 + num2 + num3) / 3;
    
    // Output the average
    printf("The average of the three numbers is: %.2f\n", average);

    // Task b: Check if a given character is a digit
    char ch;
    
    // Prompt user to enter a character
    printf("Enter a character to check if it is a digit: ");
    scanf(" %c", &ch); // Note the space before %c to skip any whitespace characters
    
    // Check if the character is a digit
    if (isdigit(ch)) {
        printf("The character '%c' is a digit.\n", ch);
    } else {
        printf("The character '%c' is not a digit.\n", ch);
    }

    // Task c: Print the smallest of two numbers
    float numA, numB;
    
    // Prompt user to enter two numbers
    printf("Enter the first number: ");
    scanf("%f", &numA);
    printf("Enter the second number: ");
    scanf("%f", &numB);
    
    // Determine the smallest number
    if (numA < numB) {
        printf("The smallest number is: %.2f\n", numA);
    } else if (numB < numA) {
        printf("The smallest number is: %.2f\n", numB);
    } else {
        printf("Both numbers are equal.\n");
    }
    
    return 0;
}
