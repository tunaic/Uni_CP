#include <stdio.h>

// 1. Determinati daca bitul k este setat sau nu

int main()
{
    int byte, k;

    scanf("%d %d", &byte, &k);

    int mask  = (1 << k);

    if((byte & mask) == 0)
    {
        printf("Bitul %d din byteul %d nu este setat.", k, byte);
    }

    else if((byte & mask) > 0){
        printf("Bitul %d din byteul %d este setat.", k, byte);
    }

    return 0;
}
