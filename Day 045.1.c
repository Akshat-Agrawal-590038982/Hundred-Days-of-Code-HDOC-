/* Count frequency of a given character in a string */


#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    char ch = 'o';
    int count = 0;
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }

    printf("The character '%c' appears %d times in the string \"%s\".\n", ch, count, str);

    return 0;
}