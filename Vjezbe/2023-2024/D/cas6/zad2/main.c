#include <stdio.h>
#include <stdlib.h>
#include "matr_lib.h"

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);

    int matr[n][m];

    read_matr(n, m, matr);
    print_matr(n, m, matr);

    return 0;
}
/*
5 6
1 2 3 4 5 6
2 3 4 5 6 7
3 4 5 6 7 8
4 5 6 7 8 9
5 6 7 8 9 10

*/
