#include <stdio.h>

int main() {
    int a[10][10], row, col, i, j, sum;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);

    printf("Enter matrix elements:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Row-wise sum:\n");

    for(i = 0; i < row; i++) {
        sum = 0;
        for(j = 0; j < col; j++) {
            sum = sum + a[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}