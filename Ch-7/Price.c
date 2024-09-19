#include <stdio.h>

int main() {
    float prices[3];
    float gstRate = 0.18; // Assuming GST rate is 18%
    float finalCosts[3];

    // Input prices for three items
    for(int i = 0; i < 3; i++) {
        printf("Enter the price of item %d: ", i + 1);
        scanf("%f", &prices[i]);
    }

    // Calculate final cost with GST for each item
    for(int i = 0; i < 3; i++) {
        finalCosts[i] = prices[i] + (prices[i] * gstRate);
    }

    // Print final costs
    printf("\nFinal costs with GST:\n");
    for(int i = 0; i < 3; i++) {
        printf("Item %d: %.2f\n", i + 1, finalCosts[i]);
    }

    return 0;
}
