#include <stdio.h>
#include <string.h>

char findHighestFrequencyChar(char str[]) {
    int freq[256] = {0};  // Array to store the frequency of each character
    int max = 0;
    char result;

    // Calculate frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
        if (freq[(unsigned char)str[i]] > max) {
            max = freq[(unsigned char)str[i]];
            result = str[i];
        }
    }

    return result;
}

int main() {
    char str[] = "hello world";

    char highestFreqChar = findHighestFrequencyChar(str);
    printf("The character with the highest frequency is: %c\n", highestFreqChar);

    return 0;
}
