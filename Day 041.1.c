/* Count characters in a string without using built-in length functions */


#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    int count = 0;

    while (str[count] != '\0') {
        count++;
    }

    printf("The length of the string is: %d\n", count);

    return 0;
}