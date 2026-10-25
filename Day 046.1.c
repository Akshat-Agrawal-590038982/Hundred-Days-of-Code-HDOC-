/* Remove all vowels from a string */


#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    char result[100]; // Assuming the result will not exceed 100 characters
    int i = 0, j = 0;

    while (str[i] != '\0') {
        // Check if the character is a vowel
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            result[j++] = str[i]; // Add non-vowel character to result
        }
        i++;
    }
    result[j] = '\0'; // Null-terminate the result string

    printf("String after removing vowels: %s\n", result);

    return 0;
}