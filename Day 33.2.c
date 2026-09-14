/*
Insert an element in a sorted array at the appropriate position.
*/


#include <stdio.h>

int main() {
    int n, target;

    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    int arr[n + 1]; // Create an array with one extra space for the new element

    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &target);

    // Find the appropriate position to insert the target
    int pos = n; // Default position is at the end
    for (int i = 0; i < n; i++) {
        if (arr[i] > target) {
            pos = i;
            break;
        }
    }

    // Shift elements to the right to make space for the new element
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the target element at the found position
    arr[pos] = target;

    printf("Array after insertion:\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}