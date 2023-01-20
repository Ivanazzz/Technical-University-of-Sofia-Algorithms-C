#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Съставете алгоритъм и напишете програма за намиране на произведението
    // на всички елементи на едномерен масив, участващи в двойки от елементи,
    // чиито суми са не по-големи от 120.

    int array[] = {3, 2, 119, 4};
    int arrayLength = sizeof(array) / sizeof(int);

    int result = 1;

    for (int i = 0; i < arrayLength; i++) {
        for (int j = i + 1; j < arrayLength; j++) {
            if (array[i] + array[j] <= 120) {
                result *= array[i] * array[j];
            }
        }
    }

    printf("Result: %d", result);

    return 0;
}
