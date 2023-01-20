#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Програма за размяна на стойностите на две променливи (естествени числа) чрез умножение

    int firstNumber, secondNumber;

    printf("Enter the first number: ");
    scanf("%d", &firstNumber);
    printf("Enter the second number: ");
    scanf("%d", &secondNumber);

    firstNumber *= secondNumber;
    secondNumber = firstNumber / secondNumber;
    firstNumber /= secondNumber;

    printf("Now the first number is %d and the second number is %d", firstNumber, secondNumber);

    return 0;
}
