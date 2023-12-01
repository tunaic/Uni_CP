#include <stdio.h>
#include <stdlib.h>

int sim(double** matrix, int n)
{
    for(int i = 0; i < n; i ++)
    {
        for(int j = 0; j < n; j ++)
        {
            if(matrix[i][j] != matrix[j][i])
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int n;

    scanf("%d", &n);

    int** matrix = (int**)malloc(n * sizeof(int*));
    if(matrix == NULL)
    {
        perror("Alocare dinamica");
        return ;
    }
    for(int i = 0; i < n; i++)
    {
        matrix[i] = (int*)malloc(n * sizeof(int));
        if(matrix[i] == NULL)
        {
            perror("Alocare dinamica");
            return ;
        }
        for(int j = 0; j < n; j ++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    if(sim(matrix, n))
    {
        puts("Simetrica");
    }
    else puts("Nu e simetrica");


    for(int i = 0; i < n; i++)
    {
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}
