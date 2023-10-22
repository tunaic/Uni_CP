#include <stdio.h>

// 4. Schimbati starea bitului k

int main()
{
    int byte, k;

    scanf("%d %d", &byte, &k);

    int mask = (1 << k);

    int newbyte = byte ^ mask;

    printf("%d", newbyte);
    return 0;
}
