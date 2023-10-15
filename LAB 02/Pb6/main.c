#include <stdio.h>
#include <stdlib.h>
//6. Afisarea codului ASCII al unui caracter citit si invers
int main()
{
    char ch;
    scanf("%c", &ch);
    printf("Afisarea codului ASCII a unui caracter %c este %d:\n", ch, ch);

    int codASCII;
    scanf("%d", &codASCII);
    printf("Caracterul corespunzator codului ASCII %d este: %c\n", codASCII, (char)codASCII);
    return 0;
}
