/* Toggle case of each character in a string */


#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // Convert to uppercase
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // Convert to lowercase
        }
        i++;
    }

    printf("Toggled case string: %s\n", str);

    return 0;
}