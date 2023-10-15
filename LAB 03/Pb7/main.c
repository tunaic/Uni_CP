#include <stdio.h>
// 7. Determinati lungimea totala a reuniunii a doua intervale de pe axa reala [a,b] si [c,d].

#define MIN(a, b) (a < b ? a : b)
#define MAX(a, b) (a > b ? a : b)
int main()
{
    float A, B, C, D;

    scanf("%f %f %f %f", &A, &B, &C, &D);

    float L, R;

    L = MAX(A, C);
    R = MIN(B, D);

    if(R > L)
    {
        printf("Lungimea = %.1f", R - L);
    }
    else printf("0");
    return 0;
}
