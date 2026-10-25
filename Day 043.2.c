/* Check if a string is a palindrome */


#include <stdio.h>

int main() {
    char str[] = "madam";
    int length = 0;
    int i;
    int isPalindrome = 1; // Assume it is a palindrome

    // Calculate the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Check for palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }

    if (isPalindrome) {
        printf("The string \"%s\" is a palindrome.\n", str);
    } else {
        printf("The string \"%s\" is not a palindrome.\n", str);
    }

    return 0;
}