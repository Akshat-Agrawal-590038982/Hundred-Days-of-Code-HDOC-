/* Find the longest word in a sentence */


#include <stdio.h>

int main() {
    char str[] = "The quick brown fox jumps over the lazy dog";
    int maxLength = 0, currentLength = 0;
    int i = 0, startIndex = 0, longestWordStartIndex = 0;

    while (str[i] != '\0') {
        if (str[i] != ' ') {
            currentLength++;
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                longestWordStartIndex = startIndex;
            }
            currentLength = 0;
            startIndex = i + 1; // Update start index for the next word
        }
        i++;
    }

    // Check for the last word in case the string doesn't end with a space
    if (currentLength > maxLength) {
        maxLength = currentLength;
        longestWordStartIndex = startIndex;
    }

    printf("The longest word is: ");
    for (i = longestWordStartIndex; i < longestWordStartIndex + maxLength; i++) {
        putchar(str[i]);
    }
    printf("\n");

    return 0;
}