#include <stdio.h>

#define N 4

int main() {
    int matrix[N][N] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int searchValue;

    printf("Enter value to search for: ");
    scanf("%d", &searchValue);

    int row = -1;
    int col;
    for (col = 0; col < N; col++) {
        if (searchValue >= matrix[0][col] && searchValue <= matrix[N - 1][col]) {
            row = binarySearch(matrix, col, 0, N - 1, searchValue);
            break;
        }
    }

    if (row == -1) {
        printf("Value not found in matrix.\n");
    }
    else {
        printf("Value found at position (%d, %d).\n", row, col);
    }

    return 0;
}

int binarySearch(int matrix[N][N], int col, int low, int high, int searchValue) {
    while (low <= high) {
        int middle = (low + high) / 2;

        if (searchValue == matrix[middle][col]) {
            return middle;
        }
        else if (searchValue < matrix[middle][col]) {
            high = middle - 1;
        }
        else {
            low = middle + 1;
        }
    }

    return -1;
}
