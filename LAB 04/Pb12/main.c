#include <stdio.h>

// 12. Determinati daca un numar intreg este negativ sau pozitiv

int main()
{
    int n;

    scanf("%d", &n);

    if(n & (1 << 31)){
        printf("Numarul %d este negativ.", n);
    }
    else{
        printf("Numarul %d este pozitiv.", n);
    }

    return 0;
}
