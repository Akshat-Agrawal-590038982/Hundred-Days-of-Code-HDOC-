/* Write a program to take two sorted arrays of size m and n as input. 
Merge both the arrays such that the merged array is also sorted. Print the 
merged array */


#include <stdio.h>

void mergeSortedArrays(int arr1[], int m, int arr2[], int n, int merged[]) {
    int i = 0; // Index for arr1
    int j = 0; // Index for arr2
    int k = 0; // Index for merged array

    // Merge the two arrays while both have elements
    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++]; // Take element from arr1
        } else {
            merged[k++] = arr2[j++]; // Take element from arr2
        }
    }

    // If there are remaining elements in arr1, add them to merged
    while (i < m) {
        merged[k++] = arr1[i++];
    }

    // If there are remaining elements in arr2, add them to merged
    while (j < n) {
        merged[k++] = arr2[j++];
    }
}