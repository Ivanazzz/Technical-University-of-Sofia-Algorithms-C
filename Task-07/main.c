#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Програма за определяне дали дадена година е високосна

    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is leap year", year);
    }
    else {
        printf("%d is not leap year", year);
    }

    return 0;
}
