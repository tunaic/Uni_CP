#include <stdio.h>

// 11. Citim un numar cu exact 4 cifre si afisam cifrele in ordine inversa (fara bucla)
int main()
{
    int n;
    scanf("%d", &n);
    int d = n % 10;
    int c = (n / 10) % 10;
    int b = (n / 100) % 10;
    int a = n / 1000;

    printf("%d%d%d%d", d,c,b,a);
    return 0;
}
