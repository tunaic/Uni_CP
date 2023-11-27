#include <stdio.h>
#include <stdlib.h>

long long suma(int* u, int n){

    long long sum = 0;
    for(int i = 0; i < n; i++){
        sum += *(u - i);
    }
    return sum;
}

int main()
{
    int n, a[1000];

    scanf("%d", &n);
    for(int i = 0; i < n; i ++){
        scanf("%d", &a[i]);
    }

    long long ans = suma(&a[n - 1], n);

    printf("%lld", ans);
    return 0;
}
