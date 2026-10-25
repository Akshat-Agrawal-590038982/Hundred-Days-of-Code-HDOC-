/* Reverse a string */


#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    int length = 0;
    int i;

    // Calculate the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Reverse the string in place
    for (i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}