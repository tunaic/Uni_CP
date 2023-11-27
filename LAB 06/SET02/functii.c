#include <stdio.h>
#include <math.h>
#include "functii.h"

void citire(unsigned n, double p[]){

    for(int i = 0; i < n; i++){
        scanf("%lf", &p[i]);
    }
}

void citire2(unsigned m, double p[]){

    for(int i = 0; i < m; i ++){
        scanf("%lf", &p[i]);
    }

    for(int i = m ; i < 1000; i ++){
        p[i] = 0.0;
    }
}

void afiseazaPolinom(int n, double coeficienti[]){
    printf("Polinomul este: ");
    for (int i = n; i >= 0; --i) {
        if (coeficienti[i] != 0) {
            if (i < n) {
                printf(coeficienti[i] > 0 ? " + " : " - ");
                coeficienti[i] = coeficienti[i] > 0 ? coeficienti[i] : -coeficienti[i];
            }

            if (i == 0 || coeficienti[i] != 1) {
                printf("%.2f", coeficienti[i]);
            }

            if (i > 0) {
                printf("x");

                if (i > 1) {
                    printf("^%d", i);
                }
            }
        }
    }
    printf("\n");
}
double polX0(unsigned n, double p[], int x0){

    double rez = 0.0;
    for(int i = n; i >= 0; --i){
        rez += pow(x0, i);
    }
    return rez;
}

void adunare(unsigned n, double a[], unsigned m, double b[], double rez[]){

    int grmax = (n > m) ? n : m;

    for(int i = 0; i < grmax; i ++){
        double ca = (i <= n) ? a[i] : 0.0;
        double cb = (i <= m) ? b[i] : 0.0;

        rez[i] = ca + cb;
    }

}

void inmultire(unsigned n, double a[], unsigned m, double b[], double rez[]){
    for(int i = 0; i < n + m; i ++){
        rez[i] = 0.0;
    }

    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            rez[i + j] = a[i] * b[j];
        }
    }
}

void impartire(unsigned n, double a[], unsigned m, double b[], double re[]){
}
