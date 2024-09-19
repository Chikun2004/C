#include <stdio.h>

int main() {
    int amount, hundreds, fifties, tens;

    // Input the amount to be withdrawn
    printf("Enter the amount to be withdrawn (in multiples of 10): ");
    scanf("%d", &amount);

    // Calculate the number of 100 notes
    hundreds = amount / 100;
    amount = amount % 100;

    // Calculate the number of 50 notes
    fifties = amount / 50;
    amount = amount % 50;

    // Calculate the number of 10 notes
    tens = amount / 10;

    // Display the number of notes
    printf("Number of 100 notes: %d\n", hundreds);
    printf("Number of 50 notes: %d\n", fifties);
    printf("Number of 10 notes: %d\n", tens);

    return 0;
}
