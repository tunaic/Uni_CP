#include <stdio.h>
#include <math.h>

int main()
{
    double a = 3.0;
    double b = 4.0;

    double radiani = atan2(b, a);

    double grade = radiani * (180.0 / 3.14);

    printf("%.2f", grade);
    return 0;
}
