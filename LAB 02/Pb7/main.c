#include <stdio.h>
#include <stdlib.h>
//7. Schimbati o litera mica in una mare si invers
int main()
{
    char ch, CH;
    scanf("%c", &ch);
    ch = ch ^ 32; // ^ operatorul XOR inverseaza al 6-lea bit
    printf("%c", ch);
    return 0;
}
