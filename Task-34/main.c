#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Програма за изчисляване на най-голям общ делител на две естествени числа чрез рекурсия.

    int firstNumber, secondNumber;

    printf("Enter the first number: ");
    scanf("%d", &firstNumber);
    printf("Enter the second number: ");
    scanf("%d", &secondNumber);

    if (firstNumber == secondNumber) {
        printf("GCD: %d", firstNumber);
        return 0;
    }
    else if (secondNumber > firstNumber) {
        int temp = firstNumber;
        firstNumber = secondNumber;
        secondNumber = temp;
    }

    int result = gcd(firstNumber, secondNumber);

    printf("GCD: %d", result);

    return 0;
}

int gcd(int firstNumber, int secondNumber) {
    if (secondNumber == 0) {
        return firstNumber;
    }

    gcd(secondNumber, firstNumber % secondNumber);
}
