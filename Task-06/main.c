#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Програма за намиране на максимума на три числа

    int firstNumber, secondNumber, thirdNumber, maxNumber;

    printf("Enter the first number: ");
    scanf("%d", &firstNumber);
    printf("Enter the second number: ");
    scanf("%d", &secondNumber);
    printf("Enter the third number: ");
    scanf("%d", &thirdNumber);

    if (firstNumber > secondNumber) {
        maxNumber = firstNumber;
    }
    else {
        maxNumber = secondNumber;
    }

    if (thirdNumber > maxNumber) {
        maxNumber = thirdNumber;
    }

    printf("The max number is: %d", maxNumber);

    return 0;
}
