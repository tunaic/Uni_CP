#include <stdio.h>

/*
Implementați o funcție care returnează litera mare corespunzătoare unei litere mici, litera mică corespunzătoare unei litere mari
sau caracterul nul în alte cazuri.
*/

char f(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        return ch - 32;
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        return ch + 32;
    }
    else return '0';
}

int main()
{
    char ch;

    scanf("%c", &ch);

    char ans = f(ch);

    printf("%c", ans);
    return 0;
}
