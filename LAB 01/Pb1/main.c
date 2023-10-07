
//1. Suma numerelor impare pana la o limita (posibil numar real). Calculare cu bucla si formula directa.

#include <stdio.h>

int main()
{
    int limit;
    scanf("%d", &limit);

    int suma1 = 0;
    for (int i = 1; i <= limit; i += 2)   // calculare cu bucla
    {
        suma1 += i;
    }
    printf("Suma numerelor impare pana la %d este %d (calculare cu bucla)\n", limit, suma1);

    if(limit % 2 == 0)
    {
        printf("Introduceti o limita impara.\n"); //calculare cu formula directa
        return 1;
    }

    int suma2 = (limit + 1) / 2 * ((limit - 1) / 2 + 1);

    printf("Suma numerelor impare pana la %d este %d (calculare cu formula directa).", limit, suma2);

    return 0;
}
