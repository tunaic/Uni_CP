#include <stdio.h>
#include <stdlib.h>

void copiaza(char *dest, char *source){

    while(*source){
        *dest = *source;
        dest ++;
        source ++;
    }
    *dest = '\0';
}

int main()
{
    char a[1000], b[1000];

    fgets(a, sizeof(a), stdin);

    copiaza(b, a);

    printf("%s", b);
    return 0;
}
