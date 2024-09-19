#include <stdio.h>

int main() {
    float total_selling_price, total_profit, total_cost_price, cost_price_per_item;

    // Input total selling price and total profit
    printf("Enter the total selling price of 15 items: ");
    scanf("%f", &total_selling_price);

    printf("Enter the total profit earned on these 15 items: ");
    scanf("%f", &total_profit);

    // Calculate total cost price
    total_cost_price = total_selling_price - total_profit;

    // Calculate cost price per item
    cost_price_per_item = total_cost_price / 15;

    // Display the cost price of one item
    printf("Cost Price of one item = Rs. %.2f\n", cost_price_per_item);

    return 0;
}
