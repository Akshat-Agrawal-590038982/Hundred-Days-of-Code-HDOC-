/* Print all sub-strings of a string */


#include <stdio.h>

int main() {
    char str[] = "abc";
    int length = 0;

    // Calculate the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Print all sub-strings
    printf("All sub-strings of \"%s\":\n", str);
    for (int i = 0; i < length; i++) {
        for (int j = i; j < length; j++) {
            for (int k = i; k <= j; k++) {
                putchar(str[k]);
            }
            putchar('\n');
        }
    }

    return 0;
}