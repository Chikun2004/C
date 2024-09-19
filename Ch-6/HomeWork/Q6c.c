#include <stdio.h>

int main() {
    char alphabet[26];

    // Initialize the array with letters 'A' to 'Z'
    for (int i = 0; i < 26; i++) {
        alphabet[i] = 'A' + i;
    }

    char *ptr = alphabet;

    // Print all letters in the alphabet using the pointer
    printf("The English alphabet is:\n");
    for (int i = 0; i < 26; i++) {
        printf("%c ", *(ptr + i));
    }
    printf("\n");

    return 0;
}
