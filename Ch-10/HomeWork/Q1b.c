#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char str[1000];
    int vowels = 0;

    // Open the file in read mode to fetch the string
    file = fopen("input.txt", "r");

    if (file == NULL) {
        printf("Error: Unable to open file!\n");
        return 1;
    }

    // Read the string from the file
    fgets(str, 1000, file);
    fclose(file);

    // Count vowels in the string
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
    }

    // Open the file in write mode to replace content with vowel count
    file = fopen("input.txt", "w");
    if (file == NULL) {
        printf("Error: Unable to open file!\n");
        return 1;
    }

    // Write the number of vowels to the file
    fprintf(file, "Number of vowels: %d\n", vowels);

    // Close the file
    fclose(file);

    printf("Replaced file content with the number of vowels: %d\n", vowels);

    return 0;
}
