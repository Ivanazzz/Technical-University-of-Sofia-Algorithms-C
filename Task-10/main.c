#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Програма за намиране на максималния елемент на едномерен масив, средната
    // стойност на сумата на елементите, броя на нечетните и дали числото n се
    // съдържа в отрицателните елементи на масива.

    int array[] = {1, 66, 17, 33, 19, 9, 4, 2, 77, 101, 13, 12, 3, 5};
    int number = 17;

    int arrayCount = sizeof(array) / sizeof(int);

    int maxElement = array[0];
    int sum = 0;
    int oddsCount = 0;
    int isInside = 0;

    for (int i = 0; i < arrayCount; i++) {
        sum += array[i];

        if (array[i] > maxElement) {
            maxElement = array[i];
        }

        if (array[i] % 2 != 0) {
            oddsCount++;
        }

        if (!isInside && array[i] == number) {
            isInside = 1;
        }
    }

    printf("Max element in the array: %d\n", maxElement);
    printf("Average sum: %.2f\n", sum * 1.0 / arrayCount);
    printf("Odds count: %d\n", oddsCount);

    if (isInside == 1) {
        printf("Is %d inside the array: True\n", number);
    }
    else {
        printf("Is %d inside the array: False\n", number);
    }

    return 0;
}
