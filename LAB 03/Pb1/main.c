#include <stdio.h>
// 1. Afisati un mesaj de eroare daca nu se face citirea in mod corect cu scanf.
int main()
{
    int  x;

    if(scanf("%d", &x) == 0)
    {
        printf("Citirea nu este corecta");
    }
    return 0;
}
