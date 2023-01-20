#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Програма за изчисляване на най-големия общ делител на две естествени числа чрез рекурсивна функция.

    int firstNumber, secondNumber;

    printf("Enter the first number: ");
    scanf("%d", &firstNumber);
    printf("Enter the second number: ");
    scanf("%d", &secondNumber);

    if (firstNumber == secondNumber || secondNumber == 0) {
        printf("GCD of %d and %d is: %d", firstNumber, secondNumber, firstNumber);
        return;
    }
    else if (secondNumber > firstNumber) {
        int temp = firstNumber;
        firstNumber = secondNumber;
        secondNumber = temp;
    }

    int gcdResult = gcd(firstNumber, secondNumber);
    printf("GCD of %d and %d is: %d", firstNumber, secondNumber, gcdResult);

    return 0;
}

int gcd(int firstNumber, int secondNumber) {
    int remainder = firstNumber % secondNumber;
    if (remainder == 0) {
        return secondNumber;
    }

    firstNumber = secondNumber;
    secondNumber = remainder;

    gcd(firstNumber, secondNumber);
}
