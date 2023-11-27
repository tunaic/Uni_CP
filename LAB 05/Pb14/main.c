#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start, end;
    double elapsed_time;

    start = clock();
    for(int i = 0; i < 10000000; i ++)
    {

    }
    end = clock();

    elapsed_time = (double)(end - start) * 1000 / CLOCKS_PER_SEC;

    printf("%.2f", elapsed_time);
    return 0;
}
