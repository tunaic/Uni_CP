#include <stdio.h>
#include <math.h>
//5. Calculati numarul de cifre ale lui n factorial. Discutie: cazul cu numere mari n ~ 100.

int main()
{
    long long factorial = 1;
    int n;
    scanf("%d", &n);
    double sum = 0;
    for(int i = 1; i <= n; i ++)
    {
        sum += log10(i);
    }
    int nr_cif = sum + 1;
    printf("Numarul de cifre ale lui %d factorial este: %d", n, nr_cif);
    return 0;
}
