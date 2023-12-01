#include <stdio.h>
#include <stdlib.h>

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

    int* phiValues = getPHI(n);

    for(int i = 0; i < n; i++){
        printf("%d ", phiValues[i]);
    }

    free(phiValues);
    return 0;
}
