#include <stdio.h>

// 10. Schimbati orice litera in litera mica

int main()
{
    char x;

    scanf("%c", &x);

    x ^= 'a' ^ 'A';

    printf("%c", x);
    return 0;
}
