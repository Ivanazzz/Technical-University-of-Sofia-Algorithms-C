#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Съставете алгоритъм и напишете програма, която проверява за наличие
    // на дадена цифра в дадено естествено число чрез рекурсивна функция.

    int number, digit;
    printf("Enter number: ");
    scanf("%d", &number);
    printf("Enter digit: ");
    scanf("%d", &digit);

    search(number, digit);

    return 0;
}

void search(number, digit) {
    int lastDigitOfNumber = number % 10;
    if (number == 0) {
        printf("False");
        return;
    }
    else if (lastDigitOfNumber == digit) {
        printf("True");
        return;
    }

    number /= 10;
    search(number, digit);
}
