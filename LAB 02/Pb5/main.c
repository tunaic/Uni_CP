#include <stdio.h>
#include <stdlib.h>
// 5. Conversie de la grade in radiani si invers
int main()
{
    double rad, grade;
    double rad2, grade2;
    scanf("%lf", &rad);
    //conversie radieni in grade
    grade = rad * 180 / 3.141593;
    printf("%.2lf", grade);

    scanf("%lf", &grade2);
    //conversie grade in radieni
    rad2 = grade2 * 3.141593 / 180;
    printf("%.2lf", rad2);
    return 0;
}
