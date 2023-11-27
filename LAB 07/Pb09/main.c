#include <stdio.h>
#include <stdlib.h>

void rotatie(int n, float *v){

    float aux = v[0];
    for(int i = 1; i < n; i++){
        v[i - 1] = v[i];
    }
    v[n - 1] = aux;
}

int main()
{
    int n;
    scanf("%d", &n);

    float v[1000];

    for(int i = 0; i < n; i++){
        scanf("%f", &v[i]);
    }

    rotatie(n, v);

    for(int i = 0; i < n; i++){
        printf("%.2f ", v[i]);
    }
    return 0;
}
