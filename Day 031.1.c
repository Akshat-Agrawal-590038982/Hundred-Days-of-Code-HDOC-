/*
Search for an element in an array using linear search.
*/


#include <stdio.h>

int main() {
    int n, target, found = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Element %d is present in the array.\n", target);
    } else {
        printf("Element %d is not present in the array.\n", target);
    }

    return 0;
}