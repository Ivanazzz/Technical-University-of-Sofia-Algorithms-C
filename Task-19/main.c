#include <stdio.h>
#include <stdlib.h>

#define N 3

int main()
{
    // Съставете алгоритъм и напишете програма за намиране на сумата на
    // елементите по вторичния диагонал на двумерен масив.

    int matrix[N][N];

    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            printf("Matrix[%d][%d]: ", row, col);
            scanf("%d", &matrix[row][col]);
        }
    }

    int secondaryDiagonalSum = 0;

    for (int row = 0; row < N; row++) {
        int col = N - row - 1;
        secondaryDiagonalSum += matrix[row][col];
    }

    printf("The sum of the secondary diagonal is: %d", secondaryDiagonalSum);

    return 0;
}
