#include <stdio.h>
//2. Rezolvati o ecuatie de gradul 1: ax+b = 0, se trateaza toate cazurile speciale
int main()
{
    float a, b, x;

    scanf("%f %f", &a, &b);

    if(a == 0)
    {
        printf("Eroare\n");
    }
    else
    {
        if(b == 0)
        {
            x = 0;
        }
        else
        {
            x = -b / a;
        }
        printf("%.1f", x);
    }
    return 0;
}
