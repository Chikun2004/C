#include <stdio.h>
#include <ctype.h>  // For using toupper and tolower functions

void toggleCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);  // Convert lowercase to uppercase
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);  // Convert uppercase to lowercase
        }
    }
}

int main() {
    char str[] = "Hello World";

    toggleCase(str);

    printf("String after toggling case: %s\n", str);

    return 0;
}
