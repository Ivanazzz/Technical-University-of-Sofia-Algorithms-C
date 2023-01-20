#include <stdio.h>
#include <stdlib.h>

#define N 100

int main()
{
    // Програма за изчисляване на числото на Фибоначи по въведен номер в
    // редицата на Фибоначи чрез рекурсия и динамично програмиране.

    int number;
    int array[N] = {0};

    char command[N / 10];
    while (1)
    {
        printf("Enter command: ");
        scanf("%s", &command);

        if (strcmp(command, "end") == 0)
        {
            break;
        }

        number = atoi(command);

        if (number >= 0)
        {
            int result;

            if (number != 0 && array[number] != 0)
            {
                result = array[number];
            }
            else
            {
                result = fibonacci(array, number);
            }

        printf("Result: %d\n", result);
    }
    else
    {
        printf("Invalid number!\n");
    }
    }

    return 0;
}

int fibonacci(int array[], int number)
{
    if (number == 0)
    {
        array[number] = 0;
        return 0;
    }
    else if (number == 1)
    {
        array[number] = 1;
        return 1;
    }

    array[number] = fibonacci(array, number - 1) + fibonacci(array, number - 2);

    return array[number];
}
