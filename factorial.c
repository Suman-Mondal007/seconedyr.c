//write a c program to take user input for an array and find the factorial
#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) {
        printf("Enter elements in the array a[%d]:", i);
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        int fact = 1;
        for(j = 1; j <= arr[i]; j++) {
            fact *= j;
        }
        printf("Factorial of %d is: %d\n", arr[i], fact);
    }
}
