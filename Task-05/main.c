#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Програма за намиране периметъра на триъгълник чрез използване на синусовата теорема
    // a / sinA = b / sinB = c / sinC = 2R

    float a, b, c, p, A, B, C;

    printf("C = ");
    scanf("%f", &c);
    printf("A = ");
    scanf("%f", &A);
    printf("B = ");
    scanf("%f", &B);

    C = 180 - A - B;
    b = c * sin(B) / sin(C);
    a = c * sin(A) / sin(C);
    p = a + b + c;

    printf("p = %.2f", p);

    return 0;
}
