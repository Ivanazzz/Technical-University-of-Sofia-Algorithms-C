#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Програма, проверяваща дали дадена редица е монотонно намаляваща, т.е. дали всеки
    // елемент на редицата е по-голям или равен на следващият чрез рекурсивна функция.

    int array[] = {9, 8, 7, 7, 6, 5, 4, 3, 2, 2, 1};
    int arrayLength = sizeof(array) / sizeof(array[0]);
    int index = 0;
    int lastIndex = arrayLength - 1;

    check(array, index, lastIndex);

    return 0;
}

void check(int array[], int index, int lastIndex) {
    if (index == lastIndex) {
        printf("True");
        return;
    }
    else if (array[index] < array[index + 1]) {
        printf("False");
        return;
    }

    check(array, index + 1, lastIndex);
}
