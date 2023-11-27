#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    scanf("%d%d", &a, &b);
    int ans = rand() % (b - a + 1) + a;
    printf("%d", ans);
    return 0;
}
