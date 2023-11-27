#include <stdio.h>
/*
Implementați o funcție care convertește un întreg n din baza 10 în baza b.
Rezultatul se stochează sub forma unui tablou cu cifrele individuale. Restricţii: n>=0, n<=1018, 1< b <= 36. Pentru baze mari vezi problema 12.
*/

char get_digit(char ch){

    if(ch > 9){
        return ch + 'A' - 10;
    }
    else return '0' + ch;
}

void conversie(){

    unsigned long long n;
    int b, a[65];

    scanf("%llu%d", &n, &b);

    int r = 0, i = 0;

    while(n){

    r = n % b;
    a[i] = get_digit(r);
    n /= b;

    }

    for(int j = i - 1; j >= 0; j --)
    {
        printf("%c ", a[j]);
    }

}

int main()
{
    conversie();
    return 0;
}
