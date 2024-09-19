#include <stdio.h>

int main() {
    FILE *file;
    char str[1000];

    // Open the file in read mode
    file = fopen("input.txt", "r");
    
    if (file == NULL) {
        printf("Error: Unable to open file!\n");
        return 1;
    }

    // Read the string from the file
    fgets(str, 1000, file);

    // Output the string to the user
    printf("String read from file: %s\n", str);

    // Close the file
    fclose(file);

    return 0;
}
