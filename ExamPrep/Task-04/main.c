#include <stdio.h>
#include <stdlib.h>

#define N 6

int main()
{
    // Oбхождане на масив и изкарване на броя на четните числа, които са по-големи
    // от 100 и по-малки от 10 000

    int array[N];

    for (int i = 0; i < N; i++) {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }

    int count = 0;
    for (int i = 0; i < N; i++) {
        if (array[i] % 2 == 0
            && array[i] > 100
            && array[i] < 10000) {
                count++;
            }
    }

    printf("Count: %d", count);

    return 0;
}
