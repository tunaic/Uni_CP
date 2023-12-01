#include <stdio.h>
#include <stdlib.h>
#include "prb3.h"

int *divizori(int n, int *k){
    int *sir_divizori = malloc(n * sizeof(int));

    if(sir_divizori == NULL){
        puts("Alocarea dinamica a esuat!");
    }
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        sir_divizori[count++] = i;
    }

    *k = count;
    return sir_divizori;
}
