#include <stdio.h>

int main() {
    // Task a: Calculate the perimeter of a rectangle
    int a, b;
    
    // Prompt user to enter the lengths of the sides of the rectangle
    printf("Enter the length of side a: ");
    scanf("%d", &a);
    printf("Enter the length of side b: ");
    scanf("%d", &b);
    
    // Calculate the perimeter of the rectangle
    int perimeter = 2 * (a + b);
    
    // Output the perimeter
    printf("The perimeter of the rectangle is: %d\n", perimeter);
    
    // Task b: Calculate the cube of a number
    int n;
    
    // Prompt user to enter a number
    printf("Enter a number to find its cube: ");
    scanf("%d", &n);
    
    // Calculate the cube of the number
    int cube = n * n * n;
    
    // Output the cube of the number
    printf("The cube of %d is: %d\n", n, cube);
    
    return 0;
}