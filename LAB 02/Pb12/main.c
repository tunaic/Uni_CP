#include <stdio.h>

//12. Conversii din sir de caractere in alt tip cu sscanf
int main()
{
    char str1[] = "12345";
    char str2[] = "3.14159";
    int numar1;
    float numar2;

    sscanf(str1, "%d", &numar1);
    sscanf(str2, "%f", &numar2);

    printf("Numarul intreg este: %d\n", numar1);
    printf("Numarul in virgula mobila este: %f\n", numar2);
    return 0;
}
