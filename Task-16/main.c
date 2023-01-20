#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Въведете елементите на двумерен масив. Създайте едномерен масив с елементи,
    // елементите на двумерния масив, както следва: сумата на елементите по главния
    // диагонал, сумите на елементите по редове и броя на елементите под главния
    // диагонал, по-малки от сумите на индексите им.

    const int rows = 4;
    const int cols = 4;

    int matrix[rows][cols];

    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            printf("Matrix[%d][%d] = ", row, col);
            scanf("%d", &matrix[row][col]);
        }
    }

    int array[1 + rows + 1];
    int sum = 0;

    for (int i = 0; i < rows; i++) {
        sum += matrix[i][i];
    }
    array[0] = sum;
    sum = 0;

    for (int row = 0; row < rows; row++) {
        sum = 0;
        for (int col = 0; col < cols; col++) {
            sum += matrix[row][col];
        }

        array[row + 1] = sum;
    }

    sum = 0;

    for (int row = 1; row < rows; row++) {
        for (int col = 0; col < row; col++) {
            if (matrix[row][col] < row + col) {
                sum++;
            }
        }
    }

    int arrayLength = sizeof(array) / sizeof(int);
    array[arrayLength - 1] = sum;

    for (int i = 0; i < arrayLength; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
