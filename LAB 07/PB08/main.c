#include <stdio.h>
#include <stdlib.h>

void inversare(float *a, int n){

    float aux;
    for(int i = 0; i < n / 2; i ++){
        aux = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = aux;
    }
}

int main()
{
    int n;
    float v[1000];

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%f", &v[i]);
    }
    inversare(v, n);

    for(int i = 0; i < n; i++){
        printf("%.2f ", v[i]);
    }

    return 0;
}
