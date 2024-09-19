#include <stdio.h>

void removeSpaces(char str[]) {
    int i = 0, j = 0;

    while (str[i]) {
        if (str[i] != ' ') {
            str[j++] = str[i];  // Only copy non-space characters
        }
        i++;
    }
    str[j] = '\0';  // Terminate the modified string
}

int main() {
    char str[] = "hello world";

    removeSpaces(str);

    printf("String after removing spaces: %s\n", str);

    return 0;
}
