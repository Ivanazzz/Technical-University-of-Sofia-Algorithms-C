#include <stdio.h>
#include <stdlib.h>

#define N 6

int main()
{
    // Въведете елементите на едномерен масив. Изведете броя на четните от тях

    int array[N];
    for (int i = 0; i < N; i++) {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }

    int evensCount = 0;
    for (int i = 0; i < N; i++) {
        if (array[i] % 2 == 0) {
            evensCount++;
        }
    }

    printf("Even's count: %d", evensCount);

    return 0;
}
