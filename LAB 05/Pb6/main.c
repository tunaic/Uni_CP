#include <stdio.h>
#include <math.h>
int is_square(int n){

    if(sqrt(n) * sqrt(n) == n)
        return 1;
    return 0;
}

int main()
{
    int n = 3;

    if(is_square(n))
        printf("Este");
    else printf("sugi pl!");
    return 0;
}
