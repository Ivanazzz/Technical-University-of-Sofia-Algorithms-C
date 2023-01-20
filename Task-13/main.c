#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Съставете алгоритъм и напишете програма за намиране на броя на площадките на
    // едномерен масив. Площадка наричаме два или повече съседни и еднакви елемента
    // на едномерен масив.

    int array[] = {2, 2, 2, 2, 3, 4, 4, 5, 5, 5, 6};
    int arrayLength = sizeof(array) / sizeof(int);

    int count = 0;

    int currentEqualElementsCount = 1;
    for (int i = 0; i < arrayLength - 1; i++) {
        if (array[i] == array[i + 1]) {
            currentEqualElementsCount++;

            if (i == arrayLength - 2 && currentEqualElementsCount >= 2) {
                count++;
            }

            continue;
        }

        if (currentEqualElementsCount >= 2) {
            count++;
            currentEqualElementsCount = 1;
        }
    }

    printf("Result: %d", count);

    return 0;
}
