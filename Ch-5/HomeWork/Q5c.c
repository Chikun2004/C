#include <stdio.h>

void checkTemperature(float temperature) {
    if (temperature >= 30) {
        printf("Hot\n");
    } else {
        printf("Cold\n");
    }
}

int main() {
    float temperature;
    
    // Prompt user to enter the temperature
    printf("Enter the temperature: ");
    scanf("%f", &temperature);
    
    // Check and print the temperature condition
    checkTemperature(temperature);
    
    return 0;
}
