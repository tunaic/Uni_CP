#include <stdio.h>

// 7. Test de divizibilitate cu 2^k

int main()
{
    int byte, k;

    scanf("%d %d", &byte, &k);

    if((byte >> k) == 0){
        printf("Divizibil");
    }
    else{
        printf("Nu este divizibil");
    }
    return 0;
}
