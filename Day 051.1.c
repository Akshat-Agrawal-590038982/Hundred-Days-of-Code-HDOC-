/* Write a Program to take a sorted array(say nums[]) and an 
integer (say target) as inputs. The elements in the sorted 
array might be repeated. You need to print the first and last 
occurrence of the target and print the index of first and last occurrence. 
Print -1, -1 if the target is not present */


#include <stdio.h>

int findFirstOccurrence(int nums[], int size, int target) {
    int left = 0, right = size - 1;
    int firstOccurrence = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            firstOccurrence = mid;
            right = mid - 1; // Search in the left half
        } else if (nums[mid] < target) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }

    return firstOccurrence;
}