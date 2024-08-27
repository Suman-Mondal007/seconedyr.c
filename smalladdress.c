//write a program in c to take user input for an array and find the address of smallest number
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
    int *min = &arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] < *min) {
            min = &arr[i];
        }
    }
    printf("The smallest number in the array is: %d\n", *min);
    printf("The address of the smallest number is:%p\n", &min);
}
