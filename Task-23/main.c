#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Програма за изчисляване на факториел чрез итерация.

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

    int result = 1;
    for (int i = 1; i <= number; i++) {
        result *= i;
    }

    return result;
}
