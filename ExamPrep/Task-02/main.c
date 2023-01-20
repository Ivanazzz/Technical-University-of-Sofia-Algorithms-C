#include <stdio.h>
#include <stdlib.h>

#define N 6

int main()
{
    // Въведете елементите на едномерен масив. Изведете максималният от тях

    int array[N];

    for (int i = 0; i < N; i++) {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }

    int max = array[0];
    for (int i = 0; i < N; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    printf("Max number is: %d", max);

    return 0;
}
