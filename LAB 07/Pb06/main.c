#include <stdio.h>
#include <stdlib.h>

float* return_pmin(int n, float a[]){

    float* pmin = &a[0];
    for(int i = 1; i < n; i ++){
        if(*pmin > a[i]){
            pmin = &a[i];
        }
    }
    return pmin;
}

int main()
{
    int n;
    float a[1000];

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%f", &a[i]);
    }

    float* pmin = return_pmin(n, a);
    printf("%.2f", *pmin);
    return 0;
}
