//Write a c program to reverse of an array
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) {
        printf("Enter elements in the array a[%d]:", i);
        scanf("%d", &arr[i]);
    }
    printf("Reversed array:\n");
    for(i = n-1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
}
