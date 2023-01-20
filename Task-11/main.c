#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Съставете алгоритъм и напишете програма за преброяване на всички двойки от
    // съседни елементи на едномерен масив, в които двата елемента имат различни знаци.

    int array[] = {-1, 2, -3, 4, -5, 6, -7, 8, -9};
    int arrayLength = sizeof(array) / sizeof(int);

    int pairs = 0;

    for (int i = 0; i < arrayLength - 1; i++) {
        if ((array[i] > 0 && array[i + 1] < 0) ||
            (array[i] < 0 && array[i + 1] > 0)) {
                pairs++;
            }
    }

    printf("Pairs: %d", pairs);

    return 0;
}
