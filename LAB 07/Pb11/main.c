#include <stdio.h>
#include <stdlib.h>

int dif(int *p1, int *p2)
{
    return p2 - p1;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};

    int *p1 = &a[1];
    int *p2 = &a[3];

    int rez = dif(p1, p2);

    printf("%d", rez);
    return 0;
}
