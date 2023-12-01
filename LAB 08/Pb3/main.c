#include <stdio.h>
#include <stdlib.h>
#include "prb3.h"

int main()
{

    int n;
    scanf("%d", &n);
    int k;
    int *sir_divizori = divizori(n, &k);

    printf("Numarul de elemente: %d ", k);
    printf("Elementele:");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", sir_divizori[i]);
    }
    printf("\n");

    free(sir_divizori);
    return 0;
}

