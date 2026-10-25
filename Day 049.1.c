/* Print the initials of a name */


#include <stdio.h>

int main() {
    char name[] = "John Doe";
    int i = 0;

    printf("Initials: ");
    while (name[i] != '\0') {
        // Print the first character of each word
        if (i == 0 || name[i - 1] == ' ') {
            printf("%c", name[i]);
        }
        i++;
    }
    printf("\n");

    return 0;
}