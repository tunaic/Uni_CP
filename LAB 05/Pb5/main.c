#include <stdio.h>

int prim(int x){

    if(x < 2){
        return 0;
    }
    else if(x == 2){
        return 1;
    }
    else if(x % 2 == 0){
        return 0;
    }
    else{
        for(int d = 3; d * d <= x; d += 2){
            if(x % d == 0){
                return 0;
                break;
            }
        }
    }
    return 1;
}

void afisare(int n){

    int cnt = 0;
    int num = 2;

    while(cnt < n){
        if(prim(num)){
            printf("%d ", num);
            cnt++;
        }
        num++;
    }
    printf("\n");
}

int main()
{
    int n;

    scanf("%d", &n);

    afisare(n);
    return 0;
}
