#include <stdio.h>
#include <ctype.h>  // For using toupper function

void convertVowelsToUppercase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            str[i] = toupper(str[i]);  // Convert lowercase vowel to uppercase
        }
    }
}

int main() {
    char str[] = "hello world";

    convertVowelsToUppercase(str);

    printf("String after converting vowels to uppercase: %s\n", str);

    return 0;
}
