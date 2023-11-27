#include <stdio.h>
#include "functii.h"

int main()
{
    int n, m;
    float a[101], b[101], c[1000];

    scanf("%d", &n);
    citire(n, a);
    //afisare(n, v);

    //float ans = suma(n, v);
    //printf("%f\n", ans);

    //inv(n, v);
    //afisare(n, v);

    //sort(n, v);
    //afisare(n, v);

    //interclasare(n, a, m, b, c);

    //count(n, a);

    float ans = numar(n, a);
    printf("%f", ans);
    return 0;
}
