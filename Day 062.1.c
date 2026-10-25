/* Write a program to take an integer array arr as input. The task is to 
find the maximum sum of any contiguous subarray using Kadane's algorithm. 
Print the maximum sum as output. If all elements are negative, print the 
largest (least negative) element */


#include <stdio.h>

int maxSubarraySum(int arr[], int size) {
    int maxSum = arr[0]; // Initialize max sum with the first element
    int currentSum = arr[0]; // Initialize current sum with the first element

    for (int i = 1; i < size; i++) {
        // Update current sum to be either the current element or the sum of current element and previous current sum
        currentSum = (arr[i] > currentSum + arr[i]) ? arr[i] : currentSum + arr[i];
        // Update max sum if current sum is greater
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    return maxSum;
}