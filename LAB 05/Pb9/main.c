#include <stdio.h>

int factorial(int n){

    int fact = 1;

    for(int i = 1; i <= n; i ++){
        fact *= i;
    }

    return fact;
}

int aranjamente(int n, int k){

    return factorial(n) / factorial(n - k);
}
int main()
{
    int n, k;

    scanf("%d%d", &n, &k);

    printf("%d", aranjamente(n,k));
    return 0;
}
