#include <stdio.h>

void descompunere(float n, int* pi, float* pf){
    *pi = (int)n;
    *pf = n - (int)n;
}

int main()
{
    float n;

    scanf("%f", &n);

    int parte_int;
    float parte_fr;

    descompunere(n, &parte_int, &parte_fr);

    printf("%d\n%.6f", parte_int, parte_fr);
    return 0;
}
