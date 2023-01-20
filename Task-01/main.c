#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Изчисляване повърхността на триъгълник по формулата на Херон

    int firstSide, secondSide, thirdSide;
    printf("Enter the first side of the triangle: ");
    scanf("%d", &firstSide);
    printf("Enter the second side of the triangle: ");
    scanf("%d", &secondSide);
    printf("Enter the third side of the triangle: ");
    scanf("%d", &thirdSide);

    float halfPerimeter = (firstSide + secondSide + thirdSide) / 2.0;
    float area = sqrt(halfPerimeter * (halfPerimeter - firstSide) * (halfPerimeter - secondSide) * (halfPerimeter - thirdSide));

    printf("The area of the triangle is: %.2f", area);

    return 0;
}
