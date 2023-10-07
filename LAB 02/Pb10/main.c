#include <stdio.h>
#include <stdlib.h>
// 10. Citirea unui sir de caractare care contine spatiu cu gets (sau vezi scanf("%[^\n]"))
int main()
{
    char s[100];
    //gets(s);
    scanf("%[^\n]", s);
    printf("%s", s);
    return 0;
}
