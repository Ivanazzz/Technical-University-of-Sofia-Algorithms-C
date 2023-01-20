#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[] = { 3, 6, 1, 7, 9, 5, 4, 2, 8 };
    int length = sizeof(array) / sizeof(array[0]);

    print(array, length);

    int sortedArray[length];
    copyArray(array, sortedArray, length);
    sort(sortedArray, length);
    print(sortedArray, length);

    int reverseSortedArray[length];
    copyArray(array, reverseSortedArray, length);
    reverseSort(reverseSortedArray, length);
    print(reverseSortedArray, length);

    return 0;
}

void sort(int array[], int length) {
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void reverseSort(int array[], int length) {
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (array[j] < array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void copyArray(int array[], int copy[], int lentgh) {
    for (int i = 0; i < lentgh; i++) {
        copy[i] = array[i];
    }
}

void print(int array[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");
}
