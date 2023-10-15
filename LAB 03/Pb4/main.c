#include <stdio.h>
// 4. Implementati functia de parte fractionara in main. Atentie la numere negative!

int main()
{
    double nr;
    scanf("%lf", &nr);

    int parte_int;
    double parte_fr;

    parte_int = (int)nr;
    printf("Partea intreaga = %d\n", parte_int);

    parte_fr = nr - parte_int;
    if(parte_fr < 0)
    {
        parte_fr = -parte_fr;
    }

    printf("Partea fractionara = %.1lf", parte_fr);
    return 0;
}
