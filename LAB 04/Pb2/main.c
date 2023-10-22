#include <stdio.h>

// 2. Setati bitul k pe 1

int main()
{
    int byte, k;

    scanf("%d %d", &byte, &k);

    int mask = (1 << k);

    int newbyte = (byte | mask);

    printf("%d", newbyte);
    return 0;
}
