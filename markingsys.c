#include <stdio.h>
int main() {
    int num;
    int remarks;
    printf("Enter the number (0-100): ");
    scanf("%d", &num);
    if (num >= 91 && num <= 100) {
        remarks = 10;
    } else if (num >= 81 && num <= 90) {
        remarks = 9;
    } else if (num >= 71 && num <= 80) {
        remarks = 8;
    } else if (num >= 61 && num <= 70) {
        remarks = 7;
    } else if (num >= 51 && num <= 60) {
        remarks = 6;
    } else if (num >= 41 && num <= 50) {
        remarks = 5;
    } else if (num >= 0 && num <= 40) {
        remarks = 3;
    }
    printf("The remarks for number %d is: %d\n", num, remarks);
}
