#include <stdio.h>
#include <stdlib.h>

float** alloc(float** v, int n)
{

    v = (float**)malloc(n * sizeof(float*));
    if(v == NULL)
    {
        printf("Eroare la alocare");
        return;
    }
    for(int i = 0; i < n; i++)
    {
        v[i] = (float*)malloc(n * sizeof(float));
        if(v[i] == NULL)
        {
            printf("Eroare la alocare");
            return;
        }
    }
}

int main()
{

    return 0;
}
