#include <stdio.h>

void min_max(float a[], int n, float* pmin, float* pmax){

    *pmin = a[0];
    *pmax = a[0];

    for(int i = 1; i < n; i++){
        if(*pmin > a[i]){
            *pmin = a[i];
        }
        if(*pmax < a[i]){
            *pmax = a[i];
        }
    }
}

int main()
{
    int n;
    float a[1000];

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%f", &a[i]);
    }

    float min, max;

    min_max(a, n, &min, &max);

    printf("%.2f %.2f", min, max);
    return 0;
}
