#include <stdio.h>
#include <stdlib.h>

#define N 2
#define M 3

int main()
{
    // Даден е двумерен масив. Чрез въвеждане на уникален индекс да се изведе съответния елемент на масива.

    int matrix[N][M];

    for (int row = 0; row < N; row++) {
        for (int col = 0; col < M; col++) {
            printf("Matrix[%d][%d]: ", row, col);
            scanf("%d", &matrix[row][col]);
        }
    }

    int *ptr;
    int index, element;

    printf("Enter index: ");
    scanf("%d", &index);

    ptr = &matrix[0][0];
    element = *(ptr + index);

    printf("The element on index %d is: %d", index, element);

    return 0;
}
