/* Write a program to take a string input. Change it to sentence case */


#include <stdio.h>

void toSentenceCase(char *str) {
    int i = 0;
    int capitalizeNext = 1; // Flag to indicate if the next character should be capitalized

    while (str[i] != '\0') {
        if (capitalizeNext && str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32; // Convert to uppercase
            capitalizeNext = 0; // Reset the flag
        } else if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
            capitalizeNext = 1; // Set the flag for the next character
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32; // Convert to lowercase
        }
        i++;
    }
}