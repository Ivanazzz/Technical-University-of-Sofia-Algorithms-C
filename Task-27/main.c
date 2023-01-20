#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Съставете алгоритъм и напишете програма за изчисляване на сумата на
    // елементите на даден едномерен масив чрез рекурсивна функция.

    int array[] = { 3, 5, 11, 24, 7, 9, 51, 12, 6};
    int arrayLength = sizeof(array) / sizeof(array[0]);

    int lastIndex = arrayLength - 1;
    int arraySum = sum(array, lastIndex);

    printf("Array sum: %d", arraySum);

    return 0;
}

int sum(int array[], int lastIndex) {
    if (lastIndex == 0) {
        return array[lastIndex];
    }

    return array[lastIndex] + sum(array, lastIndex - 1);
}
