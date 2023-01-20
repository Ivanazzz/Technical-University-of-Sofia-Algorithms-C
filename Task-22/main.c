#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Програма за изчисляване на факториел чрез рекурсивна функция.

    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    int result = factorial(number);
    printf("Factorial of %d is: %d", number, result);

    return 0;
}

int factorial(int number) {
    if (number == 0) {
        return 1;
    }
    else if (number < 0) {
        return -1;
    }

    return number * factorial(number - 1);
}
