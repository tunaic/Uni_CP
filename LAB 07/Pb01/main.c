#include <stdio.h>

void interschimba(int* pa, int* pb){

    int t = *pa;
    *pa = *pb;
    *pb = t;
}

int main()
{
    int a, b;

    scanf("%d%d", &a, &b);

    interschimba(&a, &b);
    printf("%d %d", a, b);
    return 0;
}
