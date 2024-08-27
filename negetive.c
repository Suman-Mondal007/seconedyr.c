//write a c program to find the negetive number from an array
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) {
        printf("Enter elements in the array a[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Negative numbers in the array are:\n");
    for(i = 0; i < n; i++) {
        if(arr[i] < 0) {
            printf("%d , ", arr[i]);
        }
    }
}
