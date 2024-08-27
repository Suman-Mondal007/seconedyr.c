//write  a c program to check the total number of value from an array
#include <stdio.h>
int main() {
    int n, i, count = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) {
        printf("Enter elements in the array a[%d]:", i);
        scanf("%d", &arr[i]);
        count++;
    }
    printf("Total number of elements in the array: %d\n", count);
}
