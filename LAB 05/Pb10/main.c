#include <stdio.h>

int factorial(int n){

    int fact = 1;

    for(int i = 1; i <= n; i ++){
        fact *= i;
    }

    return fact;
}

int combinari(int n, int k){

    return factorial(n) / (factorial(n - k) * factorial(k));
}
int main()
{
    int n, k;
    scanf("%d%d", &n, &k);

    printf("%d", combinari(n, k));
    return 0;
}
