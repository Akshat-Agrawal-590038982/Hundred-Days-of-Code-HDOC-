/* Write a Program to take a sorted array arr[] and an integer x as input, 
find the index (0-based) of the smallest element in arr[] that is greater 
than or equal to x and print it. This element is called the ceil of x. 
If such an element does not exist, print -1. Note: In case of multiple 
occurrences of ceil of x, return the index of the first occurrence */


#include <stdio.h>

int findCeil(int arr[], int size, int x) {
    int left = 0, right = size - 1;
    int ceilIndex = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] >= x) {
            ceilIndex = mid; // Potential ceil found
            right = mid - 1; // Search in the left half for first occurrence
        } else {
            left = mid + 1; // Search in the right half
        }
    }

    return ceilIndex;
}