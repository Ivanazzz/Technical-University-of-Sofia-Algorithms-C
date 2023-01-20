#include <stdio.h>
#include <stdlib.h>

#define N 3

int main()
{
    // Да се състави програма, чрез която се обработват елементите на двумерен масив по следния начин:
    // а) всички нечетни елементи над главния диагонал да станат четни (чрез прибавяне на 1);
    // б) всички четни елементи под главния диагонал да станат нечетни (чрез изваждане на 1);
    // в) при всяка промяна съгласно условие а и б, елементът от главния диагонал в същия ред нараства с 1.

    int array[N][N];

    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            printf("Array[%d][%d]: ", row, col);
            scanf("%d", &array[row][col]);
        }
    }

    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            if (col > row && array[row][col] % 2 != 0) {
                array[row][col]++;
                array[row][row]++;
            }
            else if (col < row && array[row][col] % 2 == 0) {
                array[row][col]--;
                array[row][row]++;
            }
        }
    }

    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            printf("%d ", array[row][col]);
        }

        printf("\n");
    }

    return 0;
}
