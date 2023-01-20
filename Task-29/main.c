#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Програма, извеждаща цифрите на дадено естествено число в обратен ред чрез рекурсивна функция.

    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    reverse(number);

    return 0;
}

void reverse(int number) {
    int remainder = number % 10;
    if (number == 0) {
        return;
    }

    printf("%d", remainder);
    number /= 10;
    reverse(number);
}
