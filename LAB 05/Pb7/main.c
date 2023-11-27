#include <stdio.h>
int gdc(int a, int b){

    int r;
    while(b){
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int phi(int n){

    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(gdc(n, i) == 1){
            cnt ++;
        }
    }
    return cnt;
}

int main()
{
    int n;

    scanf("%d", &n);

    printf("%d", phi(n));
    return 0;
}

