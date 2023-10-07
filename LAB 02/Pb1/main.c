#include <stdio.h>
#include <stdlib.h>
//1. Operatii aritmetice simple pe 2 numere - demonstram limitele tipurilor
int main()
{
    int a, b;
    float c, d;
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);

    printf("%d\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);
    printf("%d\n", a / b);

    printf("%.f\n", c + d);
    printf("%.f\n", c + d);
    printf("%.f\n", c + d);
    printf("%.f\n", c + d);
    return 0;
}
