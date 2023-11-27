#include <stdio.h>
#include <float.h>
void minp(float* pmin, float x){

    if(*pmin > x){
        *pmin = x;
    }
}
int main()
{

    float a[] = {3.5, 3.0, 4.2};

    int N = sizeof(a) / sizeof(a[0]);

    float min = FLT_MAX;

    for(int i = 0; i < N; i++){
        minp(&min, a[i]);
    }

    printf("%.2f", min);
    return 0;
}
