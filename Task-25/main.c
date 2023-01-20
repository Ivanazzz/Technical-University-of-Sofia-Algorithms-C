#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Съставете алгоритъм и напишете програма за изчисляване на x^n
    // (n - цяло число) чрез рекурсивна функция, съгласно следните формули:
    // xn = x*x^(n-1), n>0
    // xn = 1, n=0
    // xn = 1/x^(-n), n<0.

    int number, pow;
    printf("Enter number: ");
    scanf("%d", &number);
    printf("Enter power: ");
    scanf("%d", &pow);

    int result = numberToPower(number, abs(pow));

    if (pow < 0) {
        printf("Result: 1 / %d", result);
    }
    else {
        printf("Result: %d", result);
    }

    return 0;
}

int numberToPower(int number, int pow) {
    if (pow == 0) {
        return 1;
    }

    pow--;
    return number * numberToPower(number, pow);
}
