//write a c program to print all the even number from an array
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) {
        printf("Enter elements in the array a[%d]:\n", i);
        scanf("%d", &arr[i]);
    }
    printf("Even numbers in the array are:\n");
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
}
