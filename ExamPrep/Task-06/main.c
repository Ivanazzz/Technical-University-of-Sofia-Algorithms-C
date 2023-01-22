#include <stdio.h>
#include <stdlib.h>

#define N 5

int main()
{
    int matrix[N][N] = {
        { 4, 1, 7, 9, 2 },
        { 8, 6, 1, 1, 3 },
        { 7, 3, 5, 4, 5 },
        { 9, 4, 8, 3, 1 },
        { 1, 1, 8, 5, 6 },
    };

    int middleElementIndex = N / 2;
    int middleElement = matrix[middleElementIndex][middleElementIndex];

    int count = 0;
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            if (matrix[row][col] < middleElement) {
                count++;
            }
        }
    }

    int array[count];
    int index = 0;
    for (int row = 0; row < N; row++) {
            for (int col = 0; col < N; col++) {
                if (matrix[row][col] < middleElement) {
                    array[index++] = matrix[row][col];
                }
            }
        }

    for (int i = 0; i < count; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;
            }
        }
    }

    for (int i = 0; i < count; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
