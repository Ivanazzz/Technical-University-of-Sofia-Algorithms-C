#include <stdio.h>
#include <stdlib.h>

#define N 3
#define M 4

int main()
{
    // Въведете елементите на двумерен масив. Да се създаде едномерен масив с
    // елементи елементите на двумерния масив намиращи се в интервала [x, y].

    int array[N][M];

    for (int row = 0; row < N; row++) {
        for (int col = 0; col < M; col++) {
            printf("Array[%d][%d] = ", row, col);
            scanf("%d", &array[row][col]);
        }
    }

    int start, end;

    printf("Enter the start: ");
    scanf("%d", &start);
    printf("Enter the end: ");
    scanf("%d", &end);

    int initialSize = N;
    int *ptr = (int*)malloc(initialSize * sizeof(int));
    if (ptr == NULL) {
        printf("Not enough memory!");
        exit(0);
    }

    int index = -1;
    int numbersCount = 0;

    for (int row = 0; row < N; row++) {
        for (int col = 0; col < M; col++) {
            if (array[row][col] >= start && array[row][col] <= end) {
                index++;

                if (index >= initialSize) {
                    ptr = realloc(ptr, (2 * initialSize) * sizeof(int));
                    initialSize *= 2;

                    if (ptr == NULL) {
                        printf("Not enough memory!");
                        exit(0);
                    }
                }

                *(ptr + index) = array[row][col];
                numbersCount++;
            }
        }
    }

    for (int i = 0; i < numbersCount; i++) {
        if (!(ptr + i) == NULL) {
            printf("%d ", *(ptr + i));
        }
    }

    free(ptr);

    return 0;
}
