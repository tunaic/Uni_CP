#include <stdio.h>
#include <stdlib.h>
// 4. Conversie de la o valuta la alta
int main()
{
    double valoare, rata_schimb;
    scanf("%lf %lf", &valoare, &rata_schimb);

    double valoare_convertita = valoare * rata_schimb;
    printf("%.2lf", valoare_convertita);
    return 0;
}
