#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int *tablou = (int *)malloc(n * sizeof(int));

    if(tablou == NULL){
        printf("Alocarea memoriei a esuat.");
        return 1;
    }

    for(int i = 0; i < n; i ++)
    scanf("%d", &tablou[i]);

    for(int i = 0; i < n; i ++)
    printf("%d ", tablou[i]);

    free(tablou);
    return 0;
}
