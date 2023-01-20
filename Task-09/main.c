#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Съставете алгоритъм и напишете програма за изчисляване на първото xn > 100
    // за рекурентната редица xn+1 = 2xn + 10, n = 0,1,…, x0 = 2

    int number = 2;


    do
    {
        number = number * 2 + 10;
    }
    while (number <= 100);

    printf("Result: %d", number);

    return 0;
}
