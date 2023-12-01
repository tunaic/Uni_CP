#include <stdio.h>
#include <stdlib.h>

double** create(int n, int m)
{

    double** matrix = (double**)malloc(n * sizeof(double*));
    if(matrix == NULL)
    {
        perror("Eroare la alocare.");
        return NULL;
    }

    for(int i = 0; i < n; i ++)
    {
        matrix[i] = (double*)malloc(m * sizeof(double));
        if(matrix[i] == NULL)
        {
            perror("Eroare la alocare");
            return NULL;
        }
        for(int j = 0; j < m; j ++)
        {
            matrix[i][j] = 1.0 / (i + j + 1);
        }
    }
    return matrix;
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

    double** matrix = create(n, m);

    print(matrix, n, m);

    for(int i = 0; i < n; i ++)
    {
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}
