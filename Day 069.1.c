/* Write a program to take an integer array as input. Only one element will 
be repeated. Print the repeated element. Try to find the result in one 
single iteration */


#include <stdio.h>

int findRepeatedElement(int arr[], int size) {
    int repeatedElement = -1; // Initialize the repeated element to -1 (not found)

    for (int i = 0; i < size; i++) {
        int index = abs(arr[i]); // Get the absolute value of the current element

        // Check if the element at the index is negative, indicating a repeat
        if (arr[index] < 0) {
            repeatedElement = index; // Found the repeated element
            break; // Exit the loop as we found the repeated element
        } else {
            arr[index] = -arr[index]; // Mark the element as seen by negating it
        }
    }

    return repeatedElement; // Return the repeated element
}