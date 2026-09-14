/*
Find the second largest element in an array.
*/


#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int second_largest = -1; // Initialize to -1 to indicate no second largest found yet

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest; // Update second largest
            largest = arr[i]; // Update largest
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i]; // Update second largest if it's not equal to the largest
        }
    }

    if (second_largest == -1) {
        printf("There is no second largest element in the array.\n");
    } else {
        printf("The second largest element is: %d\n", second_largest);
    }

    return 0;
}