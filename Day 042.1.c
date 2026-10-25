/* Count vowels and consonants in a string. */


#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    int vowels = 0, consonants = 0;
    int i = 0;

    while (str[i] != '\0') {
        char ch = str[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) { // Check if it's an alphabet
            ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch; // Convert to lowercase
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}