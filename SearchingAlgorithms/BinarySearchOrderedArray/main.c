#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(array) / sizeof(int);
    int searchValue;

    printf("Enter value to search for: ");
    scanf("%d", &searchValue);

    int result = binarySearch(array, size, searchValue);

    if (result == -1) {
        printf("Value not found in array.\n");
    }
    else {
        printf("Value found at index %d.\n", result);
    }

    return 0;
}

int binarySearch(int array[], int size, int searchValue) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int middle = (low + high) / 2;

        if (searchValue == array[middle]) {
            return middle;
        }
        else if (searchValue < array[middle]) {
            high = middle - 1;
        }
        else {
            low = middle + 1;
        }
    }

    return -1;
}
