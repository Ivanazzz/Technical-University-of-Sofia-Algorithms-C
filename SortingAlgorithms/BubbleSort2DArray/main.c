#include <stdio.h>
#include <stdlib.h>

#define N 4

int main()
{
    int matrix[N][N] = {
        { 4, 1, 8, 9 },
        { 2, 6, 3, 1 },
        { 5, 8, 4, 7 },
        { 5, 7, 6, 3 },
    };

    print(matrix);

    int sortedMatrix[N][N];
    copyMatrix(matrix, sortedMatrix);
    sort(sortedMatrix);
    print(sortedMatrix);

    int reverseSortedMatrix[N][N];
    copyMatrix(matrix, reverseSortedMatrix);
    reverseSort(reverseSortedMatrix);
    print(reverseSortedMatrix);

    return 0;
}

void sort(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int row = 0; row < N; row++) {
                for (int col = 0; col < N - 1; col++) {
                    if (matrix[row][col] > matrix[row][col + 1]) {
                        int temp = matrix[row][col];
                        matrix[row][col] = matrix[row][col + 1];
                        matrix[row][col + 1] = temp;
                    }
                }

                if (row != N - 1) {
                    if (matrix[row][N - 1] > matrix[row + 1][0]) {
                        int temp = matrix[row][N - 1];
                        matrix[row][N - 1] = matrix[row + 1][0];
                        matrix[row + 1][0] = temp;
                    }
                }
            }
        }
    }
}

void reverseSort(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int row = 0; row < N; row++) {
                for (int col = 0; col < N - 1; col++) {
                    if (matrix[row][col] < matrix[row][col + 1]) {
                        int temp = matrix[row][col];
                        matrix[row][col] = matrix[row][col + 1];
                        matrix[row][col + 1] = temp;
                    }
                }

                if (row != N - 1) {
                    if (matrix[row][N - 1] < matrix[row + 1][0]) {
                        int temp = matrix[row][N - 1];
                        matrix[row][N - 1] = matrix[row + 1][0];
                        matrix[row + 1][0] = temp;
                    }
                }
            }
        }
    }
}

void copyMatrix(int matrix[N][N], int copy[N][N]) {
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            copy[row][col] = matrix[row][col];
        }
    }
}

void print(int matrix[N][N]) {
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            printf("%d ", matrix[row][col]);
        }

        printf("\n");
    }

    printf("-------\n");
}
