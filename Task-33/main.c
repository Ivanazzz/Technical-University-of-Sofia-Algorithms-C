#include <stdio.h>
#include <stdlib.h>

#define COINS_COUNT 6

int main()
{
    // Съставете алгоритъм и напишете програма за плащане с най-малък
    // брой монети чрез алчен алгоритъм (рекурсивен вариант).

    int coins[COINS_COUNT] = {50, 20, 10, 5, 2, 1};
    int sum;

    printf("Enter sum: ");
    scanf("%d", &sum);

    int neededCoins = 0;

    if (sum > 0) {
        check(coins, 0, sum, neededCoins);
    }
    else {
        printf("Invalid sum!");
    }

    return 0;
}

void check(int coins[], int index, int sum, int neededCoins) {
    if (index == COINS_COUNT) {
        printf("Invalid sum!");
        return;
    }

    int currentCoinValue = coins[index];
    int currentCoinCount = sum / currentCoinValue;
    sum -= currentCoinCount * currentCoinValue;
    neededCoins += currentCoinCount;

    if (sum == 0) {
        printf("Needed number of coins: %d", neededCoins);
        return;
    }

    check(coins, index + 1, sum, neededCoins);
}
