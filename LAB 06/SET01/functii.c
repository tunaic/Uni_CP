#include <stdio.h>
#include <float.h>
#include "functii.h"

//1.
void citire(int n, float v[]){

    for(int i = 0; i < n; i ++){
        scanf("%f", &v[i]);
    }
}

//2.
void afisare(int n, float v[]){

    for(int i = 0; i < n; i ++){
        printf("%f ", v[i]);
    }
    printf("\n");
}

//3.
float mini(int n, float v[]){

    float minim = v[0];

    for(int i = 1; i < n; i ++){
        if(v[i] - minim < FLT_EPSILON){
            minim = v[i];
        }
    }
    return minim;
}

//4.
int mini_poz(int n, float v[]){

    float minim = v[0];
    int poz = 0;

    for(int i = 1; i < n; i ++){
        if(v[i] + FLT_EPSILON < minim){
            minim = v[i];
            poz = i;
        }
    }
    return poz;
}

//5.
float suma(int n, float v[]){

    float sum = 0;
    for(int i = 0; i < n; i ++){
        sum += v[i];
    }
    return sum;
}

//6.
void inv(int n, float v[]){

    int st = 0;
    int dr = n - 1;

    while(st < dr){

        float aux = v[st];
        v[st] = v[dr];
        v[dr] = aux;

     st ++;
    dr --;
    }
}

//7.
void sort(int n, float v[]){

    for(int i = 0; i < n; i ++){
        if(v[i] < v[i + 1]){
            float aux = v[i];
            v[i] = v[i + 1];
            v[i + 1] = aux;
        }
    }
}

//8.
void interclasare(int n, float a[], int m, float b[], float rez[]){

    int i = 0, j = 0, k = 0;

    while(i < n && j < m){
        if(a[i] <= b[j]){
            rez[k++] = a[i++];
        }
        else{
            rez[k++] = b[j++];
        }
    }

    while(i < n){
        rez[k++] = a[i++];
    }

    while(j < m){
        rez[k++] = b[j++];
    }
}

//9.
void count(int n, float v[]){

    int fr[1000] = {0};

    for(int i = 0; i < n; i++){

        int k = (int)v[i];
        fr[k]++;
    }

    for(int i = 0; i < 1000; i ++){
        if(fr[i] > 1){
            printf("%d ", i);
        }
    }
    printf("\n");
}

//10.
float numar(int n, float v[]){

    float sum = 0;

    for(int i = 0; i < n && v[i] <= sum + 1; i++){
            sum += v[i];
    }

    return sum + 1;
}
