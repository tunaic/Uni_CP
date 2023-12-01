#include <stdio.h>
#include <stdlib.h>

// Funcție pentru a verifica dacă un număr este prim
int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

// Funcție pentru a genera și a returna un tablou de numere prime
int* primeNumbers(int n, int* k) {
    int* primes = (int*)malloc(n * sizeof(int)); // alocare dinamică a memoriei
    if (primes == NULL) {
        printf("Eroare la alocarea memoriei!");
    }

    int count = 0;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            primes[count] = i;
            count++;
        }
    }

    *k = count; // actualizare numărului de elemente prime găsite
    return primes;
}
/*

//LAB

bool is_prime(int nr){
    for(int i = 0; i * i <= nr; i++)
    {
        if(nr % i == 0 )
        {
            return false;
        }
    }
    return true;
}
int compute_primes(int up_to, int *v){
    int count = 0;

    for(int i = 0; i < up_to; i++){
        if(isprime(i)){
            count ++;

            if(v != NULL){
                v[count] = i;
            }
        }
    }

    return count;
}
*/
int main() {
    int nr;
    scanf("%d", &nr);

    int k;
    int* primeArray = primeNumbers(nr, &k);

    printf("Numarul de elemente: %d\n", k);
    printf("Elementele: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", primeArray[i]);
    }
    printf("\n");

    free(primeArray); // eliberare memorie alocată dinamic

    return 0;
}
