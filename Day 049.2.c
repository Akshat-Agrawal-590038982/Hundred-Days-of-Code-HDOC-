/* Print initials of a name with the surname displayed in full */


#include <stdio.h>

int main() {
    char name[] = "John Doe";
    int i = 0;

    printf("Initials with surname: ");
    while (name[i] != '\0') {
        // Print the first character of each word
        if (i == 0 || name[i - 1] == ' ') {
            printf("%c", name[i]);
        }
        // Print the surname in full
        if (name[i] == ' ') {
            printf("%s", &name[i + 1]);
            break; // Exit after printing the surname
        }
        i++;
    }
    printf("\n");

    return 0;
}