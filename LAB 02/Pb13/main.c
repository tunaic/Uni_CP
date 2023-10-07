#include <stdio.h>
// 13. Afisarea rezultatelor de la diferite operatii sub forma tabelara cu spatiere egala:
int main()
{
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);

    int ans1 = x + y;
    int ans2 = x * y;

    printf("x   |y   |x + y   |x * y\n");
    printf("------------------------");
    printf("\n");
    printf("%d   |%d   |%d      |%d  |", x, y, ans1, ans2);
    return 0;
}
