#include <stdio.h>

//4. Descumpunerea unui numar in factori primi. Nu necesita lista de primi.

int main()
{
    int n;
    scanf("%d", &n);
    int d = 2;
    int p;
    while(n > 1){
        p = 0;
        while(n % d == 0){
            p ++;
            n /= d;
        }
        if(p)
            printf("%d ^ %d", d, p);
        d++;
        if(n > 1 && d * d > n)
        d = n;
    }
    return 0;
}
