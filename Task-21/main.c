#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Съставете алгоритъм и напишете програма, която намира броя на двойките елементи симетрични на
    // главния диагонал на двумерен масив, в които елементът над главния диагонал е по-малък от
    // елементът под главния диагонал. Например, следните двойки от елементи са симетрични спрямо
    // главния диагонал: а10 и а01; а20 и а02; а21 и а12; а30 и а03 и т.н.
    // а00   а01   а02   а03
    // а10   а11   а12   а13
    // а20   а21   а22   а23
    // а30   а31   а32   а33


    int array[4][4] = {
        {12, 5, 1, 9},
        {2, 2, 8, 6},
        {7, 3, 5, 1},
        {17, 0, 21, 10}
    };

    int arrayLength = sizeof(array) / sizeof(array[0]);
    int pairs = 0;

    for (int row = 0; row < arrayLength; row++) {
        for (int col = row; col < arrayLength; col++) {
            if (row == col) {
                continue;
            }
            else if (array[row][col] < array[col][row]) {
                pairs++;
            }
        }
    }

    printf("The number of pairs is: %d", pairs);

    return 0;
}
