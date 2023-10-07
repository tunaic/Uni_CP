#include <stdio.h>
#include <stdlib.h>
// 3. Conversie de la grade Celsius la Fahrenheit
int main()
{
    float grade_c, grade_f;
    scanf("%f", &grade_c);

    grade_f = grade_c * 9 / 5 + 32;
    printf("Grade Fahrenheit: %.1f", grade_f);
    return 0;
}
