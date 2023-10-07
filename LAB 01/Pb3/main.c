#include <stdio.h>
//3. Determinati daca un numar este prim sau nu. Atentie la numere mici 0,1,2.

int prim(int n)
{
    if(n < 2)
        return 0;
    else if(n == 2)
        return 1;
    else if(n % 2 == 0)
        return 0;
    else
    {
        for(int d = 3; d * d <= n; d+= 2)
        {
            if(n % d == 0)
            {
                return 0;
                break;
            }
        }
        return 1;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    if(prim(n))
        printf("Numarul %d este prim", n);
    else printf("Numarul %d nu este prim", n);
    return 0;
}
