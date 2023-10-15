#include <stdio.h>
// 6. Sa se determine daca un caracter citit este: litera mare, litera mica, cifra, alt caracter.
int main()
{
    char ch;

    scanf("%c", &ch);

    if(ch >= 'a' && ch <= 'z')
    {
        printf("Caracterul %c este litera mica!", ch);
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        printf("Caracterul %c este litera mare!", ch);
    }
    else {
        printf("%c este alt caracter", ch);
    }
    return 0;
}
