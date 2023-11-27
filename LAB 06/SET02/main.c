#include <stdio.h>
#include "functii.h"

int main()
{
    unsigned n, m, c;
    double a[1000], b[1000];
    double rez[10000];

    scanf("%u%u", &n, &m);

    citire(n, a);
    citire(m, b);

    impartire(n, a, m, b, rez);
    afiseazaPolinom(n + m, rez);


    return 0;
}
