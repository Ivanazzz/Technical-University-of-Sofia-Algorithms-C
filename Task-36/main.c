#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Програма за изчисляване на числото на Фибоначи по въведен номер в редицата на Фибоначи чрез рекурсия.

    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    if (number >= 0)
    {
        int result = fibonacci(number);

        printf("Result: %d", result);
    }
    else
    {
        printf("Invalid number!");
    }

    return 0;
}

int fibonacci(int number)
{
    if (number == 0)
    {
        return 0;
    }
    else if (number == 1)
    {
        return 1;
    }

    return fibonacci(number - 1) + fibonacci(number - 2);
}
