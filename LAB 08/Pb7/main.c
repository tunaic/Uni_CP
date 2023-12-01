#include <stdio.h>
#include <stdlib.h>

double** copy(double matrix[][10], int n, int m)
{

    double** copie = (double**)malloc(n * sizeof(double*));
    if(copie == NULL)
    {
        perror("Alocare esuata");
        return NULL;
    }

    for(int i = 0; i < n; i ++)
    {
        copie[i] = (double*)malloc(m * sizeof(double));
        if(copie[i] == NULL)
        {
            perror("Alocare esuata");
            return NULL;
        }

        for(int j = 0; j < m; j ++)
        {
            copie[i][j] = matrix[i][j];
        }
    }
    return copie;
}
void print(double** matrix, int n, int m)
{

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j ++)
        {
            printf("%.2f\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    double matrix[10][10];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%lf", &matrix[i][j]);
        }
    }

    double** dynamic_matrix = copy(matrix, n, m);

    print(dynamic_matrix, n, m);

    for(int i = 0; i < n; i ++)
    {
        free(dynamic_matrix[i]);
    }
    free(dynamic_matrix);
    return 0;
}
