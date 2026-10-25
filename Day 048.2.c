/* Reverse each word in a sentence without changing the word order */


#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    int start = 0, end = 0;
    int i = 0;

    while (str[i] != '\0') {
        // Find the end of the current word
        while (str[end] != ' ' && str[end] != '\0') {
            end++;
        }

        // Reverse the current word in place
        int left = start, right = end - 1;
        while (left < right) {
            char temp = str[left];
            str[left] = str[right];
            str[right] = temp;
            left++;
            right--;
        }

        // Move to the next word
        if (str[end] == ' ') {
            end++;
        }
        start = end;
    }

    printf("Sentence with reversed words: %s\n", str);

    return 0;
}