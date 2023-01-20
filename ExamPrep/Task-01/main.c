#include <stdio.h>
#include <stdlib.h>

#define N 6

int main()
{
    // Въведете и покажете елементите на едномерен масив

    int array[N];

    for (int i = 0; i < N; i++) {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < N; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}
