/* Check if two strings are anagrams of each other */


#include <stdio.h>

int areAnagrams(char str1[], char str2[]) {
    int count[26] = {0}; // Array to store the count of each lowercase alphabet
    int i = 0;

    // Count the frequency of each character in the first string
    while (str1[i] != '\0') {
        if (str1[i] >= 'a' && str1[i] <= 'z') {
            count[str1[i] - 'a']++;
        }
        i++;
    }

    i = 0;
    // Subtract the frequency of each character in the second string
    while (str2[i] != '\0') {
        if (str2[i] >= 'a' && str2[i] <= 'z') {
            count[str2[i] - 'a']--;
        }
        i++;
    }

    // Check if all counts are zero
    for (i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return 0; // Not anagrams
        }
    }

    return 1; // Anagrams
}