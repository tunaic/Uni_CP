//2. Sa se calculeze numarul de elemente sub diagonala unei matrice patratice de dimensiune n. Calculare cu bucla si formula directa.

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int cnt1 = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j ++){
            cnt1++;
        }
    }
    printf("Numarul de elemente sub diagonala unei matrice patratice de dimensiune %d (calculare cu bucla) este %d\n", n,cnt1);

    int cnt2 = n * (n - 1) / 2;
    printf("Numarul de elemente sub diagonala unei matrice patratice de dimensiune %d (calculare cu formula directa) este %d", n, cnt2);
    return 0;
}
