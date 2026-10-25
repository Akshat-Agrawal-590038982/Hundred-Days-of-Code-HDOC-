/* Read a text file and count the total number of characters, words, and 
lines. A word is defined as a sequence of non-space characters separated 
by spaces or newlines */


#include <stdio.h>

int main() {
    FILE *file = fopen("info.txt", "r"); // Open the file in read mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1; // Exit if the file cannot be opened
    }

    int charCount = 0; // Initialize character count
    int wordCount = 0; // Initialize word count
    int lineCount = 0; // Initialize line count
    char ch;
    int inWord = 0; // Flag to track if we are inside a word

    // Read each character from the file until EOF
    while ((ch = fgetc(file)) != EOF) {
        charCount++; // Increment character count

        if (ch == '\n') {
            lineCount++; // Increment line count on newline
        }

        if (ch == ' ' || ch == '\n' || ch == '\t') {
            inWord = 0; // We are not inside a word
        } else if (!inWord) {
            inWord = 1; // We have entered a new word
            wordCount++; // Increment word count
        }
    }

    fclose(file); // Close the file

    // Print the counts of characters, words, and lines
    printf("Total Characters: %d\n", charCount);
    printf("Total Words: %d\n", wordCount);
    printf("Total Lines: %d\n", lineCount);

    return 0; // Successful execution
}