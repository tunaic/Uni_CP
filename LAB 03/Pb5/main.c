#include <stdio.h>
// 5. Sa se determine daca un an citit este bisect sau nu (exista reguli speciale pt multipli de 100 si 400).
int main()
{
    int an;

    scanf("%d", &an);

    if((an % 400 == 0) || (an % 4 == 0 && an % 100 != 0))
    {
        printf("Anul %d este bisect!", an);
    }
    else printf("Anul %d nu este bisect!", an);
        return 0;
}
