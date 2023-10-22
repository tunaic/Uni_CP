#include <stdio.h>

// 6. Inmultire/impartire cu 2^k

int main()
{
    int byte, k;

    scanf("%d %d", &byte, &k);

    printf("Inmultire cu 2^%d: %d\n", k, (byte << k));
    printf("Impartire cu 2^%d: %d", k, (byte >> k));
    return 0;
}
