#include <stdio.h>

float* cauta(int n, float a[], float x){

    for(int i = 0; i < n; i++){
        if(a[i] == x){
            return &a[i];
        }
    }
    return NULL;
}

int main()
{

    int n;
    scanf("%d", &n);

    float x;
    scanf("%f", &x);

    float a[1000];
    for(int i = 0; i < n; i++){
        scanf("%f", &a[i]);
    }

    float* rez = cauta(n, a, x);

    printf("Elementul %.2f este la adresa %p", x, (void*)rez);
    return 0;
}
