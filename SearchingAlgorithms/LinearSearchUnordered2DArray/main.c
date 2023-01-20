#include <stdio.h>
#include <stdlib.h>

#define N 3

int main()
{
    int matrix[N][N] = {
        { 2, 9, 1 },
        { 13, 6, 4 },
        { 5, 27, 18 },
    };

    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    search(matrix, number);

    return 0;
}

void search(int matrix[N][N], int number) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matrix[i][j] == number) {
                printf("True");
                return;
            }
        }
    }

    printf("False");
}
