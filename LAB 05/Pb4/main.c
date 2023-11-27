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

int main()
{
    int x;

    scanf("%d", &x);

    if(prim(x)){
        printf("Este prim");
    }
    else printf("Nu este prim");
    return 0;
}
