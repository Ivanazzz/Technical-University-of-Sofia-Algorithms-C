#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[] = { 3, 7, 1, 22, 9, 7, 8, 4, 5, 1, 4 };
    int length = sizeof(array) / sizeof(array[0]);

    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    search(array, length, number);

    return 0;
}

void search(int array[], int length, int number) {
    for (int i = 0; i < length; i++) {
        if (array[i] == number) {
            printf("True");
            return;
        }
    }

    printf("False");
}
