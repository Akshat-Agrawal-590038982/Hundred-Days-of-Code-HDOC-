/* Write a program to take an integer array arr and an integer k as inputs. 
The task is to find the first negative integer in each subarray of size k 
moving from left to right. If no negative exists in a window, print "0" for 
that window. Print the results separated by spaces as output */


#include <stdio.h>

void firstNegativeInSubarrays(int arr[], int size, int k, int result[]) {
    for (int i = 0; i <= size - k; i++) {
        result[i] = 0; // Initialize result for the current window
        for (int j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                result[i] = arr[i + j]; // Store the first negative integer found
                break; // Exit the inner loop as we found the first negative
            }
        }
    }
}