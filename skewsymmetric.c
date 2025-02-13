#include <stdio.h>
int isSkewSymmetric(int *matrix, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (*(matrix + i * n + j) != -(*(matrix + j * n + i))) {
                return 0;
            }
        }
    }
    return 1;
}
int main() {
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Enter the elements of the %dx%d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", (*(matrix + i) + j));
        }
    }
    if (isSkewSymmetric((int *) matrix, n)) {
        printf("The matrix is skew-symmetric.\n");
    } else {
        printf("The matrix is not skew-symmetric.\n");
    }
    return 0;
}
