#include <stdio.h>

void read_matr(int n, int m, int matr[][m]) {
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf("%d", &matr[i][j]);
}

void print_matr(int n, int m, int matr[n][m]) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++)
            printf("%5d ", matr[i][j]);

        printf("\n");
    }
}
