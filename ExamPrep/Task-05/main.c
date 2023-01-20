#include <stdio.h>
#include <stdlib.h>

#define N 6

int main()
{
    // Dа се намери най-голям общ делител на масив от числа,
    // след което да се сортират

    int array[N] = { 9, 3, 27, 18, 36, 3 };

    int nod;
    int min = array[0];
    for (int i = 0; i < N; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }

    for (int num = min; num > 0; num--) {
        int flag = 1;
        for (int i = 0; i < N; i++) {
            if (array[i] % num != 0) {
                flag = 0;
                break;
            }
        }

        if (flag) {
            nod  = num;
            break;
        }
    }

    printf("NOD: %d\n", nod);

    sort(array);

    for (int i = 0; i < N; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}

void sort(int array[N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;
            }
        }
    }
}
