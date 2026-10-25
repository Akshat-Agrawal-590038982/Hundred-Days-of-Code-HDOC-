/* Convert a lowercase string to uppercase without using 
built-in functions */


#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // Convert to uppercase
        }
        i++;
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}