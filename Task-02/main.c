#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Съставете алгоритъм и напишете програма за намиране на сумата на цифрите на естествено трицифрено число

    int number, sum;

    printf("Enter number: ");
    scanf("%d", &number);

    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }

    printf("The sum is: %d", sum);

    return 0;
}
