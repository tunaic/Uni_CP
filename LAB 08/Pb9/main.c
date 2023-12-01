#include <stdio.h>
#include <stdlib.h>

long long** Pascal(int n)
{
    long long** triangle = (long long**)malloc((n + 1) * sizeof(long long*));
    if (triangle == NULL)
    {
        perror("Eroare la alocare");
        return NULL;
    }
    for (int i = 0; i <= n; i++)
    {
        triangle[i] = (long long*)malloc((i + 1) * sizeof(long long));
        if (triangle[i] == NULL)
        {
            perror("Eroare la alocare");
            for (int j = 0; j < i; j++)
            {
                free(triangle[j]);
            }
            free(triangle);
            return NULL;
        }
        triangle[i][0] = triangle[i][i] = 1;
        for (int j = 1; j < i; j++)
        {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }
    return triangle;
}


void print(long long** matrix, int n)
{

    for(int i = 0; i <= n; i ++)
    {
        for(int j = 0; j <= i; j ++)
        {
            printf("%lld ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n;

    scanf("%d", &n);

    long long** triangle = Pascal(n);

    print(triangle, n);

    for(int i = 0; i <= n; i++)
    {
        free(triangle[i]);
    }
    free(triangle);
    return 0;
}
