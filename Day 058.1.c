/* Write a Program to take an integer array nums. Print an array answer 
such that answer[i] is equal to the product of all the elements of nums 
except nums[i]. The product of any prefix or suffix of nums is 
guaranteed to fit in a 32-bit integer */


#include <stdio.h>

void productExceptSelf(int nums[], int n, int answer[]) {
    // Initialize the answer array with 1s
    for (int i = 0; i < n; i++) {
        answer[i] = 1;
    }

    // Calculate the prefix products
    int prefixProduct = 1;
    for (int i = 0; i < n; i++) {
        answer[i] *= prefixProduct;
        prefixProduct *= nums[i];
    }

    // Calculate the suffix products
    int suffixProduct = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= suffixProduct;
        suffixProduct *= nums[i];
    }
}