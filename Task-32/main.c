#include <stdio.h>
#include <stdlib.h>

#define COINS_COUNT 6

int main()
{
    // Програма за плащане с най-малък брой монети чрез алчен алгоритъм (итеративен вариант).

    int coins[coinsCount] = {50, 20, 10, 5, 2, 1};
    int sum;

    printf("Enter sum: ");
    scanf("%d", &sum);

    int neededCoins = 0;

    if (sum > 0) {
        for (int i = 0; i < COINS_COUNT; i++) {
            int currentCoinValue = coins[i];
            int currentCoinCount = sum / currentCoinValue;
            sum -= currentCoinCount * currentCoinValue;
            neededCoins += currentCoinCount;

            if (sum == 0) {
                printf("Needed number of coins: %d", neededCoins);
                return 0;
            }
        }
    }

    printf("Invalid sum!");

    return 0;
}
