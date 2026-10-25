/* Write a C program that opens an existing file (e.g., info.txt) and reads 
its contents using fgets(). The program should print all the lines to the 
console until EOF (end of file) is reached */


#include <stdio.h>

int main() {
    FILE *file = fopen("info.txt", "r"); // Open the file in read mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1; // Exit if the file cannot be opened
    }

    char line[256]; // Buffer to hold each line

    // Read and print each line until EOF is reached
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line); // Print the line to the console
    }

    fclose(file); // Close the file

    return 0; // Successful execution
}