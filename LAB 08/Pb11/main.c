#include <stdio.h>
#include <stdlib.h>

void add(int** sir, int* dim, int x){

    if(*dim == 0){ // daca dim este 0, aloc un singur element
        *dim = 1;
        *sir = (int*)malloc(sizeof(int));
    }

    else if(*dim == *sir[0]){ // daca dim este egal cu nr de elemente, dublam dim
        *dim *= 2;
        *sir = (int*)realloc(*sir, (*dim) * sizeof(int));
    }

    (*sir)[*dim - 1] = x;
}

int main()
{
    int dim = 0;
    int* sir = NULL;

    add(&sir, &dim, 5);
    add(&sir, &dim, 20);

    for(int i = 0; i < dim; i++){
        printf("%d ", sir[i]);
    }

    free(sir);
    return 0;
}
