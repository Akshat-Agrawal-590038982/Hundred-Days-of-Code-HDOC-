/* Write a program to take a string s as input. The task is to find the 
length of the longest substring without repeating characters. Print the 
length as output */


#include <stdio.h>

int lengthOfLongestSubstring(char *s) {
    int charIndex[256] = {0}; // Array to store the last index of each character
    int maxLength = 0; // Variable to store the maximum length found
    int start = 0; // Start index of the current substring

    for (int end = 0; s[end] != '\0'; end++) {
        char currentChar = s[end];
        // If the character has been seen before and is within the current substring
        if (charIndex[(unsigned char)currentChar] > start) {
            start = charIndex[(unsigned char)currentChar]; // Move start to the next position after the last occurrence
        }
        charIndex[(unsigned char)currentChar] = end + 1; // Update the last index of the current character
        int currentLength = end - start + 1; // Calculate the length of the current substring
        if (currentLength > maxLength) {
            maxLength = currentLength; // Update max length if current length is greater
        }
    }

    return maxLength;
}