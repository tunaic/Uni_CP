#include <stdio.h>

// 9. Convertiti un numar intreg in octal/hexa folosind scanf si printf
int main()
{
    int numar;
    scanf("%d", &numar);

    printf("Numarul %d in octal este: %o\n", numar, numar);
    printf("Numarul %d in hexazecimal este: %X", numar, numar);
    return 0;
}
