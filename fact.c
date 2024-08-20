//Write a C program to calculate the factorial of a given number using function with pointer.
#include <stdio.h>
void factorial(int *n, int *result) {
    *result = 1;
    for(int i = 1; i <= *n; i++) {
        *result *= i;
    }
}
int main() {
    int num, fact;
    printf("Enter a number: ");
    scanf("%d", &num);
    factorial(&num, &fact);
    printf("The factorial of %d is: %d\n", num, fact);
    return 0;
}
