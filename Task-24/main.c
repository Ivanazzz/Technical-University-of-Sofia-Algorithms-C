#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Съставете алгоритъм и напишете програма за преобразуване на цяло
    // десетично положително число в двоично чрез рекурсивна функция.

    int decimalNumber;
    printf("Enter number: ");
    scanf("%d", &decimalNumber);

    printf("Decimal number %d to binary is: ", decimalNumber);
    printNumberToBinary(decimalNumber);

    return 0;
}

void printNumberToBinary(int decimalNumber) {
    if (decimalNumber == 0) {
        return;
    }

    int remainder = decimalNumber % 2;
    decimalNumber /= 2;

    printNumberToBinary(decimalNumber);

    printf("%d", remainder);
}
