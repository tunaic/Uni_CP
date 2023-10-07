#include <stdio.h>
//8. Afisati prima cifra dupa virgula a unui numar zecimal - numere negative?
int main()
{
    double n;
    scanf("%lf", &n);
    double parte_zecimala = n - (int)n;
    parte_zecimala = (parte_zecimala < 0) ? -parte_zecimala : parte_zecimala;

    int primacifra = (int)(parte_zecimala * 10);
    printf("%d", primacifra);
    return 0;
}
