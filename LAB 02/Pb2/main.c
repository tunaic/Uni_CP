#include <stdio.h>
#include <limits.h>
#include <float.h>
// 2. Afisati limitele tipurilor - vezi constantele din limits.h si float.h
int main()
{
    printf("Limite pentru tipuri intregi\n");
    printf("----------------------------\n");
    printf("CHAR_BIT: %d\n", CHAR_BIT);
    printf("SCHAR_BIT: %d\n", SCHAR_MIN);
    printf("sCHAR_BIT: %d\n", SCHAR_MAX);
    printf("UCHAR_BIT: %d\n", UCHAR_MAX);
    printf("SHRT_MIN: %d\n", SHRT_MIN);
    printf("SHRT_MAX: %d\n", SHRT_MAX);
    printf("USHRT_MAX: %u\n", USHRT_MAX);
    printf("INT_MIN: %d\n", INT_MIN);
    printf("INT_MAX: %d\n", INT_MAX);
    printf("UINT_MAX: %u\n", UINT_MAX);
    printf("LONG_MIN: %ld\n", LONG_MIN);
    printf("LONG_MAX: %ld\n", LONG_MAX);
    printf("ULONG_MAX: %lu\n", ULONG_MAX);
    printf("LLONG_MIN: %lld\n", LLONG_MIN);
    printf("LLONG_MAX: %lld\n", LLONG_MAX);
    printf("ULLONG_MAX: %llu\n", ULLONG_MAX);

    printf("Limite pentru tipuri cu virgula mobila\n");
    printf("--------------------------------------\n");
    printf("FLT_MIN: %e\n", FLT_MIN);
    printf("FLT_MAX: %e\n", FLT_MAX);
    printf("DBL_MAX: %e\n", DBL_MAX);
    printf("DBL_MIN: %e\n", DBL_MIN);
    printf("LDBL_MIN: %Le\n", LDBL_MIN);
    printf("LDBL_MAX: %Le\n", LDBL_MAX);
    return 0;
}
