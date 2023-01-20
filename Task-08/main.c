#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Програма за изчисляване на факториел - n! = 1.2.3 ... n, за n цяло число и n >= 0

    int number, result = 1;
    printf("Enter number: ");
    scanf("%d", &number);

    while (number > 1) {
        result *= number;
        number--;
    }

    printf("Result: %d", result);

    return 0;
}
