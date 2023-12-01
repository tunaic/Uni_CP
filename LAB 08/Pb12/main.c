#include <stdio.h>
#include <stdlib.h>

void sterge(int** sir, int* dim)
{

    if(*dim == 0)
    {
        return;
    }

    (*dim) -- ;

    if(*dim < (*dim / 2))
    {
        *dim = *dim * 2;
        *sir = (int*)realloc(*sir, (*dim) * sizeof(int));
        if(*sir == NULL && *dim > 0)
        {
            *dim = *dim / 2;
        }

    }

}

int main()
{
    int dim = 9;
    int* sir = (int*)malloc(dim * sizeof(int));

    for(int i = 0; i < dim; i ++)
    {
        sir[i] = i + 1;
    }

    sterge(&sir, &dim);

    for(int i = 0; i < dim; i ++)
    {
        printf("%d ", sir[i]);
    }

    puts("\n");

    sterge(&sir, &dim);

    for(int i = 0; i < dim; i ++)
    {
        printf("%d ", sir[i]);
    }
    free(sir);
    return 0;
}
