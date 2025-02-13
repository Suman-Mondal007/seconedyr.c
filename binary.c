//
// Created by sm713 on 13-02-2025.
//
#include <stdio.h>
int main() {
    int n, key, left, right, mid;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    left = 0;
    right = n - 1;
    int result = -1;
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (arr[mid] == key) {
            result = mid;
            break;
        }
        if (arr[mid] < key)
            left = mid + 1; // Search right half
        else
            right = mid - 1; // Search left half
    }
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }
    return 0;
}
