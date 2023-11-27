#include <stdio.h>
#include <string.h>

void reverseString(char* str) {

    int len = strlen(str);
    int mij = len / 2;
    char temp;

    for(int i = 0; i < mij; i ++)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main()
{
    char str[101];

    gets(str);

    reverseString(str);

    printf("%s", str);

    return 0;
}
