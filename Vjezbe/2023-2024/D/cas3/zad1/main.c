#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <limits.h>
#include "my_lib.h"

int zbir(int a, int b) {
    int z = a + b;
    return z;
}

int zbir_cif_rec(int n) {
    if(n == 0)
        return 0;

    int tmp = zbir_cif_rec(n / 10);
    return tmp + n % 10;
}

int max_cif_rec(int n) {
    if(n == 0)
        return 0;

    int tmp = max_cif_rec(n / 10);

    return tmp < n % 10 ? n % 10 : tmp;
}

int main()
{
    printf("%d", max_cif_rec(234157));

    return 0;
}

