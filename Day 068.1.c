/* Write a program to take an input array of size n. The array should 
contain all the integers between 0 to n except for one. Print that missing 
number */


#include <stdio.h>

int findMissingNumber(int arr[], int n) {
    int totalSum = n * (n + 1) / 2; // Calculate the expected sum of numbers from 0 to n
    int actualSum = 0; // Initialize the actual sum of the array elements

    // Calculate the actual sum of the array elements
    for (int i = 0; i < n - 1; i++) {
        actualSum += arr[i];
    }

    return totalSum - actualSum; // The missing number is the difference between expected and actual sums
}