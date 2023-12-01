#include <stdio.h>
#include <stdlib.h>

double** transpusa(double** matrix, int* n, int* m)
{

    double** trans_matrix = (double**)malloc(*m * sizeof(double*));
    if(trans_matrix == NULL)
    {
        perror("Eroare la alocare.");
        return NULL;
    }
    for(int i = 0; i < *m; i ++)
    {
        trans_matrix[i] = (double*)malloc(*n * sizeof(double));
        if(trans_matrix[i] == NULL)
        {
            perror("Eroare la alocare.");
            return NULL;
        }
    }

    for(int i = 0; i < *n; i ++)
    {
        for(int j = 0; j < *m; j ++)
        {
            trans_matrix[j][i] = matrix[i][j];
            if(trans_matrix[i][j] != 0){
                *n --;
                *m --;
            }
        }
    }
    return trans_matrix;
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
    printf("\n");
}
int main()
{
    int n, m;

    scanf("%d%d", &n, &m);

    double **matrix = (double **)malloc(n * sizeof(double *));
    if (matrix == NULL)
    {
        perror("Eroare la alocare");
    }

    for (int i = 0; i < n; i++)
    {
        matrix[i] = (double *)malloc(m * sizeof(double));
        if (matrix[i] == NULL)
        {
            perror("Eroare la alocare");

        }
    }

    printf("Introduceti elementele matricei:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%lf", &matrix[i][j]);
        }
    }
    printf("Matricea initiala:\n");
    print(matrix, n, m);

    double** trans_matrix = transpusa(matrix, &n, &m);
    print(trans_matrix, n, m);

    for(int i = 0; i < n; i ++)
    {
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}
