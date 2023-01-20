#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Програма, проверяваща за наличие на елемент с дадена стойност, в даден едномерен масив чрез рекурсивна функция.

    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arrayLength = sizeof(array) / sizeof(array[0]);
    int lastIndex = arrayLength - 1;

    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    search(array, number, lastIndex);

    return 0;
}

void search(int array[], int number, int lastIndex) {
    if (lastIndex < 0) {
        printf("False");
        return;
    }
    else if (array[lastIndex] == number) {
        printf("True");
        return;
    }

    search(array, number, lastIndex - 1);
}
