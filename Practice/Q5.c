#include <stdio.h>

int main() {
    int population = 80000;
    float percent_men = 52.0;
    float percent_total_literacy = 48.0;
    float percent_literate_men = 35.0;

    int total_men, total_women, literate_men, literate_women, illiterate_men, illiterate_women;

    // Calculate total number of men and women
    total_men = (percent_men / 100.0) * population;
    total_women = population - total_men;

    // Calculate number of literate men
    literate_men = (percent_literate_men / 100.0) * population;

    // Calculate number of literate women
    literate_women = ((percent_total_literacy / 100.0) * population) - literate_men;

    // Calculate number of illiterate men and women
    illiterate_men = total_men - literate_men;
    illiterate_women = total_women - literate_women;

    // Display the results
    printf("Total number of illiterate men: %d\n", illiterate_men);
    printf("Total number of illiterate women: %d\n", illiterate_women);

    return 0;
}
