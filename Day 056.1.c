/* Write a program to take an array arr[] of integers as input, the task is 
to find the next greater element for each element of the array in order of 
their appearance in the array. Next greater element of an element in the 
array is the nearest element on the right which is greater than the current 
element. If there does not exist next greater of current element, then next 
greater element for current element is -1 */


#include <stdio.h>

void findNextGreaterElements(int arr[], int size, int result[]) {
    for (int i = 0; i < size; i++) {
        result[i] = -1; // Initialize result for current element
        for (int j = i + 1; j < size; j++) {
            if (arr[j] > arr[i]) {
                result[i] = arr[j]; // Found the next greater element
                break; // Exit the inner loop as we found the next greater
            }
        }
    }
}