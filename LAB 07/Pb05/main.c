#include <stdio.h>

void descompunere(unsigned long long x, int* h, int* m, int* s){

    *h = x / 3600;
    *m = (x % 3600) / 60;
    *s = x % 60;
}

int main()
{
    unsigned long long x;

    scanf("%llu", &x);

    int h, m, s;

    descompunere(x, &h, &m, &s);

    printf("%02d:%02d:%02d", h, m, s);
    return 0;
}
