#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Програма за въвеждане и извеждане на елемeнтите на двумерен масив.

    int rowsCount, colsCount;

    printf("Enter rows count: ");
    scanf("%d", &rowsCount);
    printf("Enter cols count: ");
    scanf("%d", &colsCount);

    int matrix[rowsCount][colsCount];

    for (int row = 0; row < rowsCount; row++) {
        for (int col = 0; col < colsCount; col++) {
            printf("Matrix[%d][%d] = ", row, col);
            scanf("%d", &matrix[row][col]);
        }
    }

    for (int row = 0; row < rowsCount; row++) {
        for (int col = 0; col < colsCount; col++) {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }

    return 0;
}
