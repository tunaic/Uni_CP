#include <stdio.h>

char conversie(int x){

    if(x >= 0 && x <= 9){
        return (char)(x + '0');
    }
    else if(x >= 10 && x <= 35){
        return (char)(x - 10 + 'A');
    }
    else{
        return '0';
    }
}
int main()
{
    int x;
    scanf("%d", &x);

    printf("%c", conversie(x));
    return 0;
}
