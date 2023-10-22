#include <stdio.h>

// 3. Resetati bitul k pe 0

int main()
{
    int byte, k;

    scanf("%d %d", &byte, &k);

    int mask = ~(1 << k);

    int newbyte = (byte & mask);

    printf("%d", newbyte);
    return 0;
}
