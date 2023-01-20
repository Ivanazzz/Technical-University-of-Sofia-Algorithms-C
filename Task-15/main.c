#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Съставете алгоритъм и напишете програма за намиране на сумата
    // на елементите по периметъра на двумерен масив

    const int rows = 3;
    const int cols = 3;

    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };

    int perimeterSum = 0;

    for (int row = 0; row < rows; row++) {
        if (row == 0 || row == rows - 1) {
            for (int col = 0; col < cols; col++) {
                perimeterSum += matrix[row][col];
            }
        }
        else {
            perimeterSum += matrix[row][0];
            perimeterSum += matrix[row][cols - 1];
        }
    }

    printf("Perimeter sum: %d", perimeterSum);

    return 0;
}
